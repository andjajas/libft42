/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 20:53:25 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/20 20:53:25 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	dfill;
	size_t	i;

	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	slen = ft_strlen(src);
	if (dlen == size)
		return (size + slen);
	dfill = size - dlen - 1;
	i = 0;
	while (src[i] && dfill > 0)
	{
		dfill--;
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
