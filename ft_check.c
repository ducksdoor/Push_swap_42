/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check(char *a)
{
	int	x;

	x = ft_isnumber(a);
	if (x == -1)
		ft_exit(4);
}

void	ft_diferent(t_list_plus *stack_a)
{
	int	*test;
	int	x;
	int	y;
	int	z;

	z = ft_lstsize(stack_a);
	test = (int *)malloc(sizeof(char *) * z);
	x = 0;
	y = 0;
	while (x < z)
	{
		test[x] = stack_a->cont;
		while (y < x)
		{
			//printf("estas comparando[%d], con [%d]\n",test[y], test[x]);
			if (test[y] == test[x])
				ft_exit(5);
			y++;
		}
		y = 0;
		stack_a = stack_a->next;
		x++;
		//printf("La x vale: [%d]\n", x);
	}
	free(test);
}
