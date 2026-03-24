/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/24 13:32:11 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/24 13:46:33 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

#include <stdio.h>
int		main(void)
{
	t_list *test = ft_lstnew("test");
	test->next = ft_lstnew("test2");
	test->next->next = ft_lstnew("test3");
	test->next->next->next = ft_lstnew("test4");
	t_list *tmp = test;
	while (tmp)
	{
		printf("%s\n", (char *)(tmp->content));
		tmp = tmp->next;
	}
}