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

void	ft_perfect(t_list_plus *stack_a)
{
	t_list_plus	*aux;

	aux = stack_a;
	while (aux->next != NULL)
	{
		if (aux->cont < aux->next->cont)
		{
			aux = aux->next;
			if (aux->next == NULL)
				exit(1);
		}
		if (aux->cont > aux->next->cont)
			return ;
	}
	exit(1);
}

void	ft_check(char *a)
{
	int	x;

	x = ft_isnumber(a);
	if (x == -1)
		ft_exit();
}

void	ft_diferent(t_list_plus *stack_a)
{
	long	*test;
	long	x;
	long	y;
	long	z;

	z = ft_lstsize(stack_a);
	test = (long *)malloc(sizeof(char *) * z);
	x = 0;
	y = 0;
	while (x < z)
	{
		test[x] = stack_a->cont;
		while (y < x)
		{
			if (test[y] == test[x])
				ft_exit();
			y++;
		}
		y = 0;
		stack_a = stack_a->next;
		x++;
	}
	free(test);
}
