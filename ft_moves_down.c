/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/29 22:23:04 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_ra(t_list **lst, int bool)
{
	t_list	*aux;

	aux = *lst;
	*lst = aux->next;
	aux->next = NULL;
	ft_lstadd_back(lst, aux);
	printf("HEAD[%d].NEXT[%d]\n", (*lst)->cont, (*lst)->next->cont);
	if (bool == 0)
		ft_putstr("ra");
}

void	ft_rb(t_list **lst, int bool)
{
	t_list	*aux;

	aux = *lst;
	*lst = aux->next;
	aux->next = NULL;
	ft_lstadd_back(lst, aux);
	printf("HEAD[%d].NEXT[%d]\n", (*lst)->cont, (*lst)->next->cont);
	if (bool == 0)
		ft_putstr("rb");
}

void	ft_rs(t_list **lst, t_list **lst2)
{
	ft_ra(lst, 1);
	ft_rb(lst2, 1);
	ft_putstr("rs");
}