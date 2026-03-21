/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/21 20:11:36 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/21 20:39:51 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, (ft_strlen(s) + 1) * sizeof(char));
	return (ptr);
}
