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

void	twoarg(t_list_plus **stack_a)
{
	t_list_plus	*aux;

	aux = *stack_a;
	if (aux->cont == aux->next->cont)
		ft_exit();
	ft_sab(*stack_a, 1);
}

void	threearg(t_list_plus **stack_a)
{
	long	n_one;
	long	n_two;
	long	n_three;

	n_one = (*stack_a)->cont;
	n_two = (*stack_a)->next->cont;
	n_three = (*stack_a)->next->next->cont;
	if (n_one > n_two && n_two < n_three && n_three > n_one)
		ft_sab(*stack_a, 1);
	else if (n_one > n_two && n_two > n_three && n_three < n_one)
	{
		ft_sab(*stack_a, 1);
		ft_rrab(stack_a, 1);
	}
	else if (n_one > n_two && n_two < n_three && n_three < n_one)
		ft_rab(stack_a, 1);
	else if (n_one < n_two && n_two > n_three && n_three > n_one)
	{
		ft_sab(*stack_a, 1);
		ft_rab(stack_a, 1);
	}
	else if (n_one < n_two && n_two > n_three && n_three < n_one)
		ft_rrab(stack_a, 1);
}

void	ft_four(t_list_plus *stack_a, t_list_plus *stack_b)
{
	long		x;
	t_list_plus	*aux;

	x = search(stack_a);
	aux = ft_lstlast(stack_a);
	if (aux->cont == x)
		ft_rrab(&stack_a, 1);
	else
	{
		while (stack_a->cont != x)
		{
			ft_rab(&stack_a, 1);
		}
	}
	ft_perfect(stack_a);
	ft_pab(&stack_a, &stack_b, 1);
	threearg (&stack_a);
	ft_pab(&stack_b, &stack_a, 0);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}

void	ft_five(t_list_plus *stack_a, t_list_plus *stack_b)
{
	moves_in_five(&stack_a);
	ft_perfect(stack_a);
	ft_pab(&stack_a, &stack_b, 1);
	moves_in_five(&stack_a);
	ft_pab(&stack_a, &stack_b, 1);
	threearg (&stack_a);
	ft_pab(&stack_b, &stack_a, 0);
	ft_pab(&stack_b, &stack_a, 0);
	ft_lstclear(&stack_a);
}
