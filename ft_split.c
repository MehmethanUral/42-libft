/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:33:37 by mural             #+#    #+#             */
/*   Updated: 2026/08/11 16:31:52 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_w(char const *s, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && ft_strchr(set, s[i]))
			i++;
		if (!s[i])
			break;
		count++;
		while (s[i] && !ft_strchr(set, s[i]))
			i++;
	}
	return (count);
}

static char *dup_w(char const *s, size_t start, size_t len)
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

char	**ft_split(const char *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s || !c)
		return (NULL);
	words = malloc((count_w(s, c) + 1) * sizeof(*words));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_strchr(c, s[i]))
			i++;
		if (!s[i])
			break;
		start = i;
		while (s[i] && !ft_strchr(c, s[i]))
			i++;
		words[j] = dup_w(s, start, i - start);
		if (!words[++j])
			return (free_words(words, j - 1), NULL);	
	}
	words[j] = NULL;
	return (words);
}
