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



//copia de seguridad con sus printf
/* void	ft_pa(t_list_plus **stack_a, t_list_plus **stack_b)
{
	t_list_plus	*aux_a;
	//int	aux_b;
	//t_list_plus	*auxx_b;

	aux_a = *stack_a;
	//aux_b = aux_a->cont;
 	printf("PRIMERA posicion aux_A a = %d\n", aux_a->cont);
	printf("Primera posicion AUX_B = %d\n", aux_b); 
	*stack_a = aux_a->next;
	//auxx_b = (*stack_b)->next;
	ft_lstadd_front(stack_b, aux_a);
	//printf("Esto es stack b dentro de la funcion PA = \n");
	//showme(*stack_b);
} */