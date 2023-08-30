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

void	ft_select(t_list_plus *stack_a)
{
	int			x;
	int			cl;
	t_list_plus	*stack_b;

	stack_b = NULL;
	x = ft_lstsize(stack_a);
	if (x > 5)
	{
		ft_index(stack_a);
		cl = ft_contloop(stack_a);
		ft_algoritm(&stack_a, &stack_b, cl);
	}
	else if (x == 2)
		twoarg (&stack_a);
	else if (x == 3)
		threearg (&stack_a);
	else if (x == 4)
		ft_four(stack_a, stack_b);
	else if (x == 5)
		ft_five(stack_a, stack_b);
	exit (1);
}

// void	leaks(void)
// {
// 	system("leaks -q push_swap");
// }

int	main(int argc, char *argv[])
{
	t_list_plus	*stack_a;
	int			x;
	long		a;

	// atexit(leaks);
	stack_a = NULL;
	if (argc == 1)
		exit(1);
	x = 1;
	while (x < argc)
	{
		a = 0;
		ft_isnumber(argv[x]);
		a = ft_atoi(argv[x]);
		if (a < -2147483648 || a > 2147483647)
			ft_exit();
		create_stack(&stack_a, a);
		x++;
	}
	ft_diferent(stack_a);
	ft_index(stack_a);
	ft_perfect(stack_a);
	ft_select(stack_a);
}
