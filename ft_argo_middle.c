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


long	ft_search_loop(t_list_plus *stack_a, int y, int z)
{
	int			x;
	t_list_plus	*aux;

	aux = stack_a;
	x = 2147483647;
	while (stack_a != NULL)
	{
		if (y < stack_a->cont && x > stack_a->cont)
			x = stack_a->cont;
		stack_a = stack_a->next;
	}
	free(stack_a);
	while (aux)
	{
		if (aux->cont == x)
			aux->inde = z;
		aux = aux->next;
	}
	return (x);
}

void	ft_index(t_list_plus *stack_a)
{
	int			z;
	int			x;
	int			y;
	t_list_plus	*aux;

	z = 1;
	y = ft_lstsize(stack_a);
	aux = stack_a;
	x = search(stack_a);
	while (aux)
	{
		if (aux->cont == x)
			aux->inde = 0;
		aux = aux->next;
	}
	while (y != 0)
	{
		x = ft_search_loop(stack_a, x, z);
		y--;
		z++;
	}
}

long	ft_contloop(t_list_plus *stack_a)
{
	long		y;
	long		n;
	t_list_plus	*aux;

	aux = stack_a;
	y = 0;
	n = 1;
	while (aux)
	{
		while (y < 31)
		{
			if (((aux->inde >> y) & 1) && y > n)
				n = y;
			y++;
		}
		y = 0;
		aux = aux->next;
	}
	return (n);
}

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
			ft_rab(stack_a, 1);
		}
		else
		{
			aux = aux->next;
			ft_pab(stack_a, stack_b, 1);
		}
	n++;
	}
}

void	ft_algoritm(t_list_plus **stack_a, t_list_plus **stack_b, long cl)
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
			ft_pab(stack_b, stack_a, 0);
			x--;
		}
		i++;
	}
}
