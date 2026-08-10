/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:00:03 by mural             #+#    #+#             */
/*   Updated: 2026/08/06 11:24:01 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (big[i + j] != '\0') && j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char big[] = "Hello, World!";
	char little[] = "o";
	size_t len = 4;

	char *result = ft_strnstr(big, little, len);
	if (result != NULL)
		printf("Result: %s\n", result);
	else
		printf("Result: NULL\n");

	return 0;
}