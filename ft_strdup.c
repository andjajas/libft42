/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/21 20:11:36 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/27 17:31:43 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	elem;

	elem = ft_strlen(s) + 1;
	ptr = malloc(elem * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, elem);
	return (ptr);
}
