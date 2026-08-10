/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 10:59:41 by mural             #+#    #+#             */
/*   Updated: 2026/08/05 11:48:35 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;

	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}

#include <stdio.h>
int main(void)
{
	char src[50] = "Hello, World!";
	char dst[50] = "0123456789";
	printf("Before memmove: %s\n", dst);
	ft_memmove(dst, src, 10);
	printf("After memmove: %s\n", dst);
	return (0);
}