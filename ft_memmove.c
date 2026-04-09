/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/16 21:16:54 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/20 17:27:20 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ud;
	unsigned char	*us;
	size_t			i;

	if (!dest && !src)
		return (dest);
	ud = (unsigned char *)dest;
	us = (unsigned char *)src;
	i = 0;
	if (dest <= src)
	{
		while (i < n)
		{
			ud[i] = us[i];
			i++;
		}
	}
	else
	{
		while (n--)
			ud[n] = us[n];
	}
	return (dest);
}
