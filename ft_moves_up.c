/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/29 22:23:04 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rra(t_list_plus **lst, int bool)
{
	t_list_plus	*aux;
	t_list_plus	*last_node;

	aux = *lst;
	last_node = NULL;
	if (*lst == NULL || (*lst)->next == NULL)
		return ;

	while (aux->next != NULL)
	{
		last_node = aux;
		aux = aux->next;
	}
	if (last_node != NULL)
		last_node->next = NULL;
	ft_lstadd_front(lst, aux);

	if (bool == 0)
		ft_putstr("rra");
}

void	ft_rrb(t_list_plus **lst, int bool)
{
	t_list_plus	*aux;
	t_list_plus	*last_node;

	aux = *lst;
	last_node = NULL;
	if (*lst == NULL || (*lst)->next == NULL)
		return ;

	while (aux->next != NULL)
	{
		last_node = aux;
		aux = aux->next;
	}
	if (last_node != NULL)
		last_node->next = NULL;
	ft_lstadd_front(lst, aux);

	if (bool == 0)
		ft_putstr("rrb");
}

void	ft_rrr(t_list_plus *lst, t_list_plus *lst2)
{
	ft_rra(&lst, 1);
	ft_rrb(&lst2, 1);
	ft_putstr("rrr");
}
