/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_down_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/29 22:23:04 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rr(t_list_plus **lst, t_list_plus **lst2, char *string)
{
	char	*one;
	char	*two;
	char	*three;

	one = "rab";
	two = "rrs";
	three = "sss";
	if (string == one)
	{
		ft_rab(lst, 3);
		ft_rab(lst2, 0);
	}
	if (string == two)
	{
		ft_rrab(lst, 3);
		ft_rrab(lst2, 0);
	}
	if (string == three)
	{
		ft_sab(*lst, 3);
		ft_sab(*lst2, 0);
	}
}

void	ft_rab(t_list_plus **lst, int bool)
{
	t_list_plus	*aux;

	aux = *lst;
	*lst = aux->next;
	aux->next = NULL;
	ft_lstadd_back(lst, aux);
	if (bool == 1)
		ft_putstr("ra");
	if (bool == 2)
		ft_putstr("rb");
	if (bool == 3)
		ft_putstr("rs");
}


void	ft_rrab(t_list_plus **lst, int bool)
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
	if (bool == 1)
		ft_putstr("rra");
	if (bool == 2)
		ft_putstr("rrb");
	if (bool == 3)
		ft_putstr("rrs");
}

void	ft_sab(t_list_plus *lst, int bool)
{
	t_list_plus	*aux;
	long		aux1;
	long		aux2;
	long		fool;

	aux1 = (*lst).cont;
	aux = lst;
	aux = aux->next;
	aux2 = aux->cont;
	fool = aux1;
	aux1 = aux2;
	aux2 = fool;
	lst->cont = aux1;
	lst->next->cont = aux2;
	if (bool == 1)
		ft_putstr("sa");
	if (bool == 2)
		ft_putstr("sb");
	if (bool == 3)
		ft_putstr("ss");
}

void	ft_pab(t_list_plus **src, t_list_plus **dest, int bool)
{
	t_list_plus	*aux;

	aux = *src;
	*src = aux->next;
	ft_lstadd_front(dest, aux);
	if (bool == 0)
		ft_putstr("pa");
	if (bool == 1)
		ft_putstr("pb");
}
