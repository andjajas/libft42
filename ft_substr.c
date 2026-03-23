/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 12:55:12 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/23 12:55:12 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - (size_t) start)
		len = s_len - (size_t) start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len +1);
	return (sub_str);
}
