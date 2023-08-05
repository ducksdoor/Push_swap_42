/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/29 22:23:04 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
/*
void ft_swap(int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
	*b = aux;
}
void stk_swap(t_list *head) {
    ft_swap(&(head->cont), &(head->next->cont));
}*/

void	ft_sa(t_list *lst, int bool)
{
	t_list	*aux;

	int	aux1;
	int	aux2;
	int	fool;

	aux1 = (*lst).cont;
	aux = lst;
	aux = aux->next;
	aux2 = aux->cont;
	fool = aux1;
	aux1 = aux2;
	aux2 = fool;
	lst->cont = aux1;
	lst->next->cont = aux2;
	//printf("HEAD[%d].NEXT[%d]\n", lst->cont, (*lst).next->cont);
	if (bool == 0)
		ft_putstr("sa");
}

void	ft_sb(t_list *lst, int bool)
{
	t_list *aux;

	int aux1;
	int aux2;
	int fool;

	aux1 = (*lst).cont;
	aux = lst;
	aux = aux->next;
	aux2 = aux->cont;
	fool = aux1;
	aux1 = aux2;
	aux2 = fool;
	lst->cont = aux1;
	lst->next->cont = aux2;
	//printf("HEAD[%d].NEXT[%d]\n", lst->cont, (*lst).next->cont);
	if (bool == 0)
		ft_putstr("sb");
}

void	ft_ss(t_list *lst, t_list *lst2)
{
	ft_sa(lst, 1);
	ft_sb(lst2, 1);
	ft_putstr("ss");
}


