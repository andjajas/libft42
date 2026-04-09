/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/16 20:26:53 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/18 14:17:27 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ud;
	unsigned char	*us;
	size_t			i;

	if (!dest && !src)
		return (dest);
	ud = (unsigned char *)dest;
	us = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ud[i] = us[i];
		i++;
	}
	return (dest);
}
