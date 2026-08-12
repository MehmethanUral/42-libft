/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:33:37 by mural             #+#    #+#             */
/*   Updated: 2026/08/12 17:18:04 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	in_word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*dup_words(char const *s, size_t start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static	char	**free_words(char **words, size_t used)
{
	while (used > 0)
		free(words[--used]);
	free(words);
	return (NULL);
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
		if (!words[j])
		{
			free_words(words, j);
			return (0);
		}
		j++;
	}
	words[j] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	if (!fill_words(s, c, words))
		return (NULL);
	return (words);
}
