/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memcpy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/16 20:47:47 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/27 20:32:36 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello World";
	char dest[] = "World but the rest is different";

	ft_memcpy(dest, src, 11);
	printf("%s", dest);
	return (0);
}