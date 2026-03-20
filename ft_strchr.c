/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 14:03:48 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/20 17:21:01 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == (char) c)
// 			return ((char *)&s[i]);
// 		i++;
// 	}
// 	if (s[i] == (char) c)
// 		return ((char *)&s[i]);
// 	return (NULL);
// }