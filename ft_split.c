/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:33:37 by mural             #+#    #+#             */
/*   Updated: 2026/08/12 10:27:51 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char *dup_words(char const *s, size_t start, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = s[start + len];
	return (word);
}

static	void	free_words(char **words, size_t used)
{
	while (used--)
		free(words[used]);
	free(words);
}

static int	fill_words(char const *s, char c, char **words)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		words[j] = dup_words(s, start, i - start);
		if (!words[j++])
		{
			free_words(words, j -1);
			return (0);
		}
	}
	words[j] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	
	if (!s || !c)
		return (NULL);
	words = malloc((count_words(s, c) + 1) * sizeof(*words));
	if (!words)
		return (NULL);
	return (words);
}
