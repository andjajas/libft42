/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 14:50:40 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/21 16:56:00 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	while (s >= start)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t	i;
//
//	if (!s)
//	return (NULL);
// 	i = ft_strlen(s);
// 	if ((s[i]) == (char) c)
// 		return ((char *)&s[i]);
// 	while (i > 0)
// 	{
// 		i--;
// 		if (s[i] == (char) c)
// 			return ((char *)&s[i]);
// 	}
// 	return (NULL);
// }