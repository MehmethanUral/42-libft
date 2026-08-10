/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 10:46:55 by mural             #+#    #+#             */
/*   Updated: 2026/08/05 11:45:17 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
int main(void)
{
	char dst[] = "0123456789";
	char src[] = "Hello, World!";
	printf("Before memcpy: %s\n", dst);
	ft_memcpy(dst, src, 5);
	printf("After memcpy: %s\n", dst);
	return (0);
}