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
	size_t	slen1;
	size_t	slen2;
	char	*joinstr;

	if (!s1 || !s2)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	joinstr = malloc((slen1 + slen2 + 1) * sizeof(char));
	if (!joinstr)
		return (NULL);
	ft_memcpy(joinstr, s1, slen1);
	ft_memcpy(joinstr + slen1, s2, slen2);
	joinstr[slen1 + slen2] = '\0';
	return (joinstr);
}
