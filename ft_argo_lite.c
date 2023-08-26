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

long	twoarg(char *argv1, char *argv2)
{
	long	x;
	long	y;
	long	a;

	a = ft_isnumber(argv1);
	if (a == -1)
		ft_exit();
	a = ft_isnumber(argv2);
	if (a == -1)
		ft_exit();
	x = ft_atoi(argv1);
	y = ft_atoi(argv2);
	if (x == y)
		ft_exit();
	if (x > y)
	{
		ft_putstr("sa");
		return (0);
	}
	return (0);
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
		ft_sa(*stack_a, 0);
	else if (n_one > n_two && n_two > n_three && n_three < n_one)
	{
		ft_sa(*stack_a, 0);
		ft_rra(stack_a, 0);
	}
	else if (n_one > n_two && n_two < n_three && n_three < n_one)
		ft_ra(stack_a, 0);
	else if (n_one < n_two && n_two > n_three && n_three > n_one)
	{
		ft_sa(*stack_a, 0);
		ft_ra(stack_a, 0);
	}
	else if (n_one < n_two && n_two > n_three && n_three < n_one)
		ft_rra(stack_a, 0);
}

void	ft_four(t_list_plus *stack_a, t_list_plus *stack_b)
{
	long		x;
	t_list_plus	*aux;

	x = search(stack_a);
	aux = ft_lstlast(stack_a);
	if (aux->cont == x)
		ft_rra(&stack_a, 0);
	else
	{
		while (stack_a->cont != x)
		{
			ft_ra(&stack_a, 0);
		}
	}
	ft_pb(&stack_a, &stack_b);
	threearg (&stack_a);
	ft_pa(&stack_b, &stack_a);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}

void	ft_five(t_list_plus *stack_a, t_list_plus *stack_b)
{
	moves_in_five(&stack_a);
	ft_pb(&stack_a, &stack_b);
	moves_in_five(&stack_a);
	ft_pb(&stack_a, &stack_b);
	threearg (&stack_a);
	ft_pa(&stack_b, &stack_a);
	ft_pa(&stack_b, &stack_a);
}
