/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 10:59:41 by mural             #+#    #+#             */
/*   Updated: 2026/09/02 13:03:03 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	bacward(unsigned char *dest, unsigned char *src, size_t n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
}

static void	forward(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest > source)
		bacward(dest, source, n);
	else
		forward(dest, source, n);
	return (dst);
}
