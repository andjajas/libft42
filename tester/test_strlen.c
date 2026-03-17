/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strlen.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 13:33:11 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/16 21:21:11 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int	x;

	x = ft_strlen("abcdef");
	printf("%d", x);
	return (0);
}