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

//modificar esta funcion  yusar las de la minilibft=???? quiza borrar el ultimo nodo y añadir 
//un nodo al principio que casualmente es el que acabas de eliminar


void	ft_rra(t_list **lst, int bool)
{
	t_list	*aux;
	t_list	*segurity;

	segurity = *lst;
	aux = *lst;
	aux = ft_lstlast(aux);
	while ((*lst) != aux)
	{
		lst = &(*lst)->next;
	}
	(*lst)->next = NULL;
	lst = &segurity;
	ft_lstadd_back(&aux, segurity);
	//printf("buscamos_el_ultimo aux[%d](%d)\n", aux->cont, aux->next->cont);
	lst = &aux;
	//printf("buscamos_el_ultimo lst[%d](%d)\n", lst->cont, aux->next->cont);
	if (bool == 0)
		ft_putstr("rra");
	//showme(lst);
}

//rra devuelve valores pero al ser t_list lo hace distinto que las otras ... esto puede ser un problema porque creo que genera leaks...


t_list	*ft_rrb(t_list *lst, int bool)
{
	t_list	*aux;
	t_list	*segurity;

	segurity = lst;
	aux = lst;
	aux = ft_lstlast(aux);
	while (lst->next != aux)
	{
		lst = lst->next;
	}
	lst->next = NULL;
	lst = segurity;
	ft_lstadd_back(&aux, segurity);
	//printf("buscamos_el_ultimo aux[%d](%d)\n", aux->cont, aux->next->cont);
	lst = aux;
	//printf("buscamos_el_ultimo lst[%d](%d)\n", lst->cont, aux->next->cont);
	if (bool == 0)
		ft_putstr("rrb");
	//showme(lst);
	return (&*lst);
}

void	ft_rrr(t_list *lst, t_list *lst2)
{
	ft_rra(&lst, 1);
	lst = ft_rrb(lst2, 1);
}
