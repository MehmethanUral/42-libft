/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mural <mural@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 05:36:09 by mural             #+#    #+#             */
/*   Updated: 2026/08/09 05:36:09 by mural            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_words(char const *s, char const *set)
{
    size_t  i;
    size_t  count;

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

static char *dup_word(char const *s, size_t start, size_t len)
{
    char    *word;

    word = malloc(len + 1);
    if (!word)
        return (NULL);
    word[len] = '\0';
    while (len--)
        word[len] = s[start + len];
    return (word);
}

static void free_words(char **words, size_t used)
{
    while (used--)
        free(words[used]);
    free(words);
}

char    **ft_split(char const *s, char const *set)
{
    char    **words;
    size_t  i;
    size_t  j;
    size_t  start;

    if (!s || !set)
        return (NULL);
    words = malloc((count_words(s, set) + 1) * sizeof *words);
    if (!words)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] && ft_strchr(set, s[i]))
            i++;
        if (!s[i])
            break;
        start = i;
        while (s[i] && !ft_strchr(set, s[i]))
            i++;
        words[j] = dup_word(s, start, i - start);
        if (!words[j++])
            return (free_words(words, j - 1), NULL);
    }
    words[j] = NULL;
    return (words);
}
