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
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	size_t	filler;

	i = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	filler = size - destlen - 1;
	if (destlen >= size)
		return (size + srclen);
	while (src[i] && filler--)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
/* medium, baldr strategy
mayan strategy: start with initial length of dest
have 2 counters to go through the length of dest and src
return (the total dest+src+'\0');
*/