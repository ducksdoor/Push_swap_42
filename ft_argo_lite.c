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

int	twoarg(char *argv1, char *argv2)
{
	int	x;
	int	y;
	int	a;

	a = ft_isnumber(argv1);
	if (a == -1)
		ft_exit(1);
	a = ft_isnumber(argv2);
	if (a == -1)
		ft_exit(1);
	x = ft_atoi(argv1);
	y = ft_atoi(argv2);
	if (x == y)
	{
		ft_putstr("Numeros repetidos\n");
		exit(1);
	}
	if (x > y)
	{
		ft_putstr("sa");
		return (0);
	}
/* 	else
		ft_putstr("ok\n"); */
	return (0);
}

void	threearg(t_list **stack_a)
{
	int	n_one;
	int	n_two;
	int	n_three;

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
	else if (n_one < n_two && n_two > n_three && n_three < n_two)
		ft_rra(stack_a, 0);
/* 	else
		ft_putstr("ok"); */
}

int	search(t_list *stack_a)
{
	int	x;

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

void	ft_four(t_list *stack_a, t_list *stack_b)
{
	int		x;

	x = search(stack_a);
	while (stack_a->cont != x)
	{
		ft_ra(&stack_a, 0);
	}
	ft_pb(&stack_a, &stack_b);
	threearg (&stack_a);
	ft_pa(&stack_b, &stack_a);
	showme(stack_a, "resultado final!!");
}


void	ft_five(t_list *stack_a, t_list *stack_b)
{
	int		x;

	x = search(stack_a);
	while (stack_a->cont != x)
	{
		ft_ra(&stack_a, 0);
	}
	ft_pb(&stack_a, &stack_b);
	x = search(stack_a);
	while (stack_a->cont != x)
	{
		ft_ra(&stack_a, 0);
	}
	ft_pb(&stack_a, &stack_b);
	threearg (&stack_a);
	ft_pa(&stack_b, &stack_a);
	ft_pa(&stack_b, &stack_a);
	showme(stack_a, "resultado final!!");
}
