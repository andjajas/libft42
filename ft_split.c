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
static char		**fill_split(char **res, char const *s, char c);
static char		**clear_all(char **res, char **current);

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (fill_split(res, s, c));
}

static size_t	wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
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

static char	**fill_split(char **res, char const *s, char c)
{
	char		**temp;
	char const	*start;

	temp = res;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			*temp = ft_substr(start, 0, s - start);
			if (!*temp)
				return (clear_all(res, temp));
			temp++;
		}
	}
	*temp = NULL;
	return (res);
}

static char	**clear_all(char **res, char **current)
{
	while (current > res)
		free(*--current);
	free(res);
	return (NULL);
}
