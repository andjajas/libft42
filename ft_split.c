/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/19 17:19:18 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/24 10:42:24 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c);
static char		**fill_split(char **arr_word, char const *s, char c);
static char		**clear_all(char **arr_word, char **fill);

char	**ft_split(char const *s, char c)
{
	char	**arr_word;

	if (!s)
		return (NULL);
	arr_word = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!arr_word)
		return (NULL);
	arr_word = fill_split(arr_word, s, c);
	return (arr_word);
}

static size_t	wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**fill_split(char **arr_word, char const *s, char c)
{
	char		**fill;
	char const	*start;

	fill = arr_word;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			*fill = ft_substr(start, 0, s - start);
			if (!*fill)
				return (clear_all(arr_word, fill));
			fill++;
		}
	}
	*fill = NULL;
	return (arr_word);
}

static char	**clear_all(char **arr_word, char **fill)
{
	while (fill > arr_word)
	{
		fill--;
		free(*fill);
	}
	free(arr_word);
	return (NULL);
}
