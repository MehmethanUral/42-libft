/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:43:53 by mural             #+#    #+#             */
/*   Updated: 2026/08/12 17:16:41 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;
	char			*last;

	ch = (unsigned char)c;
	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == ch)
		last = (char *)&s[i];
	return (last);
}
