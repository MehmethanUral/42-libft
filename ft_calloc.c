/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:52:53 by mural             #+#    #+#             */
/*   Updated: 2026/08/11 16:33:37 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
		return (NULL);
	sum = nmemb * size;
	if (sum == 0)
		sum = 1;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, sum);
	return (ptr);
}
