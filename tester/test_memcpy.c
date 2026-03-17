/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memcpy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/16 20:47:47 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/16 21:20:59 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[]= "Hello World";
	char	dest[] = "World but the rest is different";

	ft_memcpy(dest, src, 11);
	printf("%s", dest);
	return (0);
}