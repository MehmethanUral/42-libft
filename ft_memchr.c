/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:02:03 by mural             #+#    #+#             */
/*   Updated: 2026/08/05 13:04:26 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *p1;
    p1 = (unsigned char *)s;
 
    i = 0;
    while (i < n)
    {
        if (p1[i] == c)
            return (&p1[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";
    char *result = ft_memchr(str, 'o', 8);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");
    return (0);
}