/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 19:57:03 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/20 20:27:36 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ms;
	unsigned char	mc;

	ms = (unsigned char *)s;
	mc = (unsigned char)c;
	while (n > 0)
	{
		if (*ms == mc)
			return (ms);
		ms++;
		n--;
	}
	return (NULL);
}
