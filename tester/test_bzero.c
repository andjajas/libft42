/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_bzero.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/16 19:59:30 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/27 20:32:31 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello World";
	int n;

	n = 7;
	ft_bzero(str, n);
	printf("%c %c %c %c", str[n], str[n + 1], str[n + 2], str[n + 3]);
	return (0);
}