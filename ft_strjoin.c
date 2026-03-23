/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 12:58:54 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/23 13:42:53 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joinedstr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joinedstr = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joinedstr)
		return (NULL);
	ft_memcpy(joinedstr, s1, s1_len);
	ft_memcpy(joinedstr + s1_len, s2, s2_len);
	joinedstr[s1_len + s2_len] = '\0';
	return (joinedstr);
}
