/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:05:27 by mural             #+#    #+#             */
/*   Updated: 2026/08/05 13:39:51 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

#include <stdio.h>
int main(void)
{
	char src[] = "Hello, World!";
	char dst[20];
	ft_strlcpy(dst, src, 5);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	return (0);
}