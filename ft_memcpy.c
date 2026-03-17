/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/16 20:26:53 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/17 15:04:48 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);

	i = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;

	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}