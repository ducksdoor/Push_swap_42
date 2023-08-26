/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argo_middle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_radix(t_list_plus **stack_a, t_list_plus **stack_b, long i)
{
	t_list_plus	*aux;
	long		n;
	long		x;

	aux = *stack_a;
	n = 0;
	x = ft_lstsize(aux);
	while (n < x)
	{
		if ((aux->inde >> i) & 1)
		{
			aux = aux->next;
			ft_ra(stack_a, 0);
		}
		else
		{
			aux = aux->next;
			ft_pb(stack_a, stack_b);
		}
	n++;
	}
}

void	ft_100(t_list_plus **stack_a, t_list_plus **stack_b, long cl)
{
	long		i;
	long		x;
	t_list_plus	*aux;

	if (!stack_a && !stack_b)
		exit(1);
	i = 0;
	while (i <= cl)
	{
		ft_radix(stack_a, stack_b, i);
		aux = *stack_b;
		x = ft_lstsize(*stack_b);
		while (x > 0)
		{
			ft_pa(stack_b, stack_a);
			x--;
		}
		i++;
	}
}
