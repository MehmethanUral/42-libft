/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:49:46 by mural             #+#    #+#             */
/*   Updated: 2026/08/05 11:57:00 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *p1;
	unsigned char *p2;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "hello, World!";
	int result = ft_memcmp(str1, str2, 13);
	printf("%d\n", result);
	return (0);
}