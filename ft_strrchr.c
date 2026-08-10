/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:43:53 by mural             #+#    #+#             */
/*   Updated: 2026/08/06 10:53:12 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	ch;
	char *last = NULL;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	
	while (*str)
	{
		if (*str == ch)
			last = (char *)str;
		str++;
	}
	return (last);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Hello, World!";
	char *result = ft_strrchr(str, 'o');
	printf("Result: %s\n", result);
	char str2[] = "Hello, World!";
	char *result2 = ft_strrchr(str2, 'l');
	printf("Result2: %s\n", result2);
	char str3[] = "Hello, World!";
	char *result3 = ft_strrchr(str3, '\0');
	printf("Result3: %s\n", result3);
	return (0);
}