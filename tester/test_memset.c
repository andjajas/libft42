/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memset.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/14 11:23:39 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/16 21:21:08 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[]= "Hello World";
	
	ft_memset(str, 'c', 7);
	printf("%s", str);
	return (0);
}