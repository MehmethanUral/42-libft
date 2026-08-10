/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:08:35 by mural             #+#    #+#             */
/*   Updated: 2026/08/06 10:46:00 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	ch;
	str = (unsigned char *)s;
	ch = (unsigned char)c;

	while (*str)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

#include <stdio.h> 

int main(void)
{
	char str[] = "Hello, World!";
	char *result = ft_strchr(str, 'o');
	printf("Result: %s\n", result);
	char str2[] = "Hello, World!";
	char *result2 = ft_strchr(str2, 'x');
	printf("Result2: %s\n", result2);
	char str3[] = "Hello, World!";
	char *result3 = ft_strchr(str3, '\0');
	printf("Result3: %s\n", result3);
	return (0);
}