/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 05:05:36 by mural             #+#    #+#             */
/*   Updated: 2026/08/09 05:05:36 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    size_t	len;
    char	*copy;

    len = ft_strlen(s1);
    copy = malloc(len + 1);
    if (!copy)
        return (NULL);
    ft_memcpy(copy, s1, len + 1);
    return (copy);
}
