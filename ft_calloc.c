/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:52:53 by mural             #+#    #+#             */
/*   Updated: 2026/08/06 14:23:47 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t sum;
	void *ptr;
	
	if (nmemb != 0 && nmemb > ((size_t)-1) / size)
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

#include <stdio.h>
int main(void)
{
	size_t nmemb = 5;
	size_t size = 5;
	int *arr = (int *)ft_calloc(nmemb, size);
	
	size_t i = 0;
	while (i < nmemb)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
}