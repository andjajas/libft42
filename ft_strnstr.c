/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/21 10:33:31 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/21 14:21:35 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	b = 0;
	while (big[b] && b < len)
	{
		l = 0;
		while ((little[l] == big[b + l]) && ((b + l) < len) && little[l])
			l++;
		if (little[l] == '\0')
			return ((char *)&big[b]);
		b++;
	}
	return (NULL);
}
