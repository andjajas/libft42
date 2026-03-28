/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/28 16:18:49 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/28 21:38:18 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	ptr = lst;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
