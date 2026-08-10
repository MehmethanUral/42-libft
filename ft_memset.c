/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 03:13:03 by mural             #+#    #+#             */
/*   Updated: 2026/08/09 03:19:33 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *ptr;
    unsigned char   byte;

    ptr = (unsigned char *)s;
    byte = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        ptr[i] = byte;
        i++;
    }
    return (s);
}
