/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 03:20:29 by mural             #+#    #+#             */
/*   Updated: 2026/08/09 03:20:29 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t      i;
    unsigned char   *dest;
    unsigned char   *source;

    dest = (unsigned char *)dst;
    source = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dst);
}
