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

void	ft_main2(t_list_plus *stack_a, t_list_plus *stack_b)
{
	int	x;
	int cl;

	x = ft_lstsize(stack_a);
	if (x == 3)
		threearg (&stack_a);
	else if (x == 4)
		ft_four(stack_a, stack_b);
	else if (x == 5)
		ft_five(stack_a, stack_b);
	else
	{
		ft_index(stack_a);
		cl = ft_contloop(stack_a);
		ft_100(&stack_a, &stack_b, cl);
	}
	//showme(stack_a, "resultado final del stack_a!!");
}

int	main(int argc, char *argv[])
{
	t_list_plus	*stack_a;
	t_list_plus	*stack_b;
	int			x;
	int			a;

	stack_a = NULL;
	stack_b = NULL;
	if (!argc)
		ft_exit(3);
	x = 1;
	if (argc == 1)
		ft_exit(3);
	else if (argc == 3)
		twoarg (argv[1], argv[2]);
	while (x < argc)
	{
		a = 0;
		ft_check(argv[x]);
		a = ft_atoi(argv[x]);
		create_stack(&stack_a, a);
		x++;
	}
	ft_diferent(stack_a);
	ft_index(stack_a);
	ft_main2(stack_a, stack_b);
}

/*
to do:

-faltaria el bitewise o como se escriba

0 posible leaks en moves_change?

2 en check hay que comprar que los numeros esten dentro de los limites.

3 no has probado que se puedan usar los movimientos dobles

hoy : -8mov arg5num , acepta negativos, start Radix
*/

