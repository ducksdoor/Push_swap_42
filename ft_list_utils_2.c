/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_lstadd_back(t_list_plus **lst, t_list_plus *new)
{
	t_list_plus	*temp;

	if (!new)
		return ;
	temp = ft_lstlast(*lst);
	if (temp)
		temp->next = new;
	else
		*lst = new;
}

void	ft_lstadd_front(t_list_plus **lst, t_list_plus *new)
{
	if (lst && new)
	{	
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstclear(t_list_plus **lst)
{
	t_list_plus	*node;
	t_list_plus	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	if (!tmp)
		return ;
	while (tmp)
	{
		node = tmp->next;
		ft_lstdelone(tmp);
		tmp = node;
	}
	*lst = NULL;
}

void	ft_lstdelone(t_list_plus *lst)
{
	if (!lst)
		return ;
	if (lst)
	{
		free(lst);
	}
}
