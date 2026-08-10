/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:53:48 by mural             #+#    #+#             */
/*   Updated: 2026/08/05 14:42:16 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	i = 0;
	j = dst_len;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + 1 < size -1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (dst_len >= size)
		return (size);
	return (dst_len + src_len);
}

#include <stdio.h>
int main(void)
{
	char dst[20] = "Hello, ";
	char src[] = "World!";
	size_t result = ft_strlcat(dst, src, 3);
	printf("Result: %zu\n", result);
	printf("Destination: %s\n", dst);
	return (0);
}