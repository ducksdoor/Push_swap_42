/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_four(t_list *stack_a, t_list *stack_b)
{
	int		x;
	t_list	*aux;

	aux = stack_a;
	x = aux->cont;
/* 	showme(aux, "abajo esta el showme de aux");
	showme(stack_a, "abajo esta el showme de stack_a");
	showme(stack_b, "abajo esta el showme de stack_b"); */
	while (aux)
	{
		printf("|%d|, (%d)\n", aux->cont, x);
		if (x > aux->cont)
			x = aux->cont;
/* 		else
			ft_ra(&stack_a, 1);
			showme(stack_a, "||||abajo esta el showme de stack_a en mov|||"); */
		aux = aux->next;
	}
	while (stack_a->cont != x)
	{
		ft_ra(&stack_a, 1);
	}
	printf("esto es el valor del modulo mas pequeño [%d]\n", x);
	ft_pa(&stack_a, &stack_b);
	showme(stack_a, "abajo esta el showme de stack_a");
	showme(stack_b, "abajo esta el showme de stack_b");
	//estas modificando esta función
	threearg (stack_a);
	showme(stack_a, "!!!abajo esta el showme de stack_a");
}
