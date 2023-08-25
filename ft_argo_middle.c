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

void	ft_radix(t_list_plus **stack_a, t_list_plus **stack_b, int i)
{
	t_list_plus	*aux;
	t_list_plus	*aux_b;
	int			n;
	int			x;
	int			guardar;

	aux = *stack_a;
	guardar = 0;
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
			aux_b = *stack_b;
			if (aux_b->inde == guardar)
			{
				ft_rb(stack_b, 0);
				guardar++;
			}
		}
		n++;
	}
	//n = ft_lstsize(*stack_b);
}

void	ft_100(t_list_plus **stack_a, t_list_plus **stack_b, int cl)
{
	int	i;
	int	x;
	t_list_plus	*aux;

	if (!stack_a && !stack_b)
		exit(1);
	i = 0;
	while (i <= cl)
	{
		ft_radix(stack_a, stack_b, i);
		aux = *stack_b;
		while (aux->inde != 0)
		{
			aux = aux->next;
			ft_pa(stack_b, stack_a);
		}
		i++;
		
	}
	
	x = ft_lstsize(*stack_b);
	while (x > 0)
	{
		ft_rrb(stack_b, 0);
		ft_pa(stack_b, stack_a);
		x--;
	}
}