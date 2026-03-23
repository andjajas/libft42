/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/19 17:19:18 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/23 21:54:20 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c);
static char		**clear_all(char **array, size_t j);

char	**ft_split(char const *s, char c)
{
	char	**arrayof_str;
	size_t	word_count;
	size_t	i;
	size_t	j;
	size_t	word_start;

	word_count = wordcount(s, c);
	arrayof_str = malloc((word_count + 1) * (sizeof(char *)));
	if (!arrayof_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			word_start = i;
			while (s[i] && s[i] != c)
				i++;
			arrayof_str[j] = ft_substr(s, word_start, i - word_start);
			if (!arrayof_str[j])
				return (clear_all(arrayof_str, j));
			j++;
		}
	}
	arrayof_str[j] = NULL;
	return (arrayof_str);
}

static size_t	wordcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**clear_all(char **array, size_t j)
{
	while (j > 0)
	{
		j--;
		free(array[j]);
	}
	free(array);
	return (NULL);
}
