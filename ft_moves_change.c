/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_change.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_pa(t_list_plus **stack_b, t_list_plus **stack_a)
{
	t_list_plus	*aux;

	aux = *stack_b;
	*stack_b = aux->next;
	ft_lstadd_front(stack_a, aux);
	ft_putstr("pa");
}

void	ft_pb(t_list_plus **stack_a, t_list_plus **stack_b)
{
	t_list_plus	*aux;

	aux = *stack_a;
	*stack_a = aux->next;
	ft_lstadd_front(stack_b, aux);
	ft_putstr("pb");
}
