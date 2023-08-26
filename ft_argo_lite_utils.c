/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argo_lite_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

long	search(t_list_plus *stack_a)
{
	long	x;

	x = stack_a->cont;
	while (stack_a != NULL)
	{
		if (x > stack_a->cont)
			x = stack_a->cont;
		stack_a = stack_a->next;
	}
	free(stack_a);
	return (x);
}

void	moves_in_five(t_list_plus **stack_a)
{
	long		x;
	t_list_plus	*aux;
	t_list_plus	*aux2;

	x = search(*stack_a);
	aux = ft_lstlast(*stack_a);
	aux2 = ft_lstlast_two(*stack_a);
	if (aux->cont == x)
		ft_rra(stack_a, 0);
	else if (aux2->cont == x)
	{
		ft_rra(stack_a, 0);
		ft_rra(stack_a, 0);
	}
	else
	{
		while ((*stack_a)->cont != x)
		{
			ft_ra(stack_a, 0);
		}
	}
}
