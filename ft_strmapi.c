/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 16:25:06 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/27 17:18:44 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	char			*s2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	s_len = (unsigned int) ft_strlen(s);
	s2 = malloc((s_len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[s_len] = '\0';
	return (s2);
}
