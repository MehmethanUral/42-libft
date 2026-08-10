/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 03:46:06 by mural             #+#    #+#             */
/*   Updated: 2026/08/09 03:46:06 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;
	char			*last;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	last = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			last = (char *)&s[i];
		i++;
	}
	if (str[i] == ch)
		last = (char *)&s[i];
	return (last);
}
