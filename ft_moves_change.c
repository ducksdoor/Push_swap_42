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

//esto esta regumal.

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux_a;
	t_list	*aux_b;

	aux_a = *stack_a;
	aux_b = *stack_b;
	aux_a->next = NULL;
	ft_lstadd_front(stack_b, aux_a);
	printf("%d\n", aux_a->cont);
	printf("se printea stackb?\n");
	showme(*stack_b);
	printf("como queda el stack_a dentro de la función?\n");
	/* showme(*stack_a); */
	/* *stack_a = stack_a->next; */
}