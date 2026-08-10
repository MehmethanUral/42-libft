/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 20:16:57 by mural             #+#    #+#             */
/*   Updated: 2026/08/10 20:16:57 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
    int count;

    count = 1;
    while (n / 10)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char	*ft_itoa(int n)
{
    char    *result;
    long    value;
    int     negative;
    int     len;

    value = n;
    negative = 0;
    if (value < 0)
    {
        negative = 1;
        value = -value;
    }
    len = count_digits(value) + negative;
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    result[len] = '\0';
    while (len-- > negative)
    {
        result[len] = '0' + (value % 10);
        value /= 10;
    }
    if (negative)
        result[0] = '-';
    return (result);
}