/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:26:01 by mural             #+#    #+#             */
/*   Updated: 2026/08/06 11:51:27 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;

	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

#include <stdio.h>
int main(void)
{
	const char *str = "   -12345";
	int result = ft_atoi(str);
	printf("Result: %d\n", result);
	const char *str2 = "   +6789";
	int result2 = ft_atoi(str2);
	printf("Result2: %d\n", result2);
	const char *str3 = "   42";
	int result3 = ft_atoi(str3);
	printf("Result3: %d\n", result3);
	return (0);
}