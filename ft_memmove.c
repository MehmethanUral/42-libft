/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 03:21:45 by mural             #+#    #+#             */
/*   Updated: 2026/08/09 03:21:45 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *dest;
    unsigned char   *source;

    dest = (unsigned char *)dst;
    source = (unsigned char *)src;
    if (dest > source)
    {
        i = n;
        while (i > 0)
        {
            dest[i - 1] = source[i - 1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dest[i] = source[i];
            i++;
        }
    }
    return (dst);
}
