/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memset.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/14 11:23:39 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/27 20:32:39 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello World";

	ft_memset(str, 'c', 7);
	printf("%s", str);
	return (0);
}