/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 20:37:37 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/20 21:13:07 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ms1;
	unsigned char	*ms2;

	ms1 = (unsigned char *)s1;
	ms2 = (unsigned char *)s2;
	while (n > 0 && *ms1 == *ms2)
	{
		ms1++;
		ms2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*ms1 - *ms2);
}
