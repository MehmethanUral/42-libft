/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:43:53 by mural             #+#    #+#             */
/*   Updated: 2026/08/12 10:28:11 by mural            ###   ########.fr       */
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
