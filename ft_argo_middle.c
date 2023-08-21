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

void	ft_index(t_list_plus *stack_a)
{
	int			z;
	int			x;
	int			y;
	t_list_plus	*aux;

	z = 2;
	y = ft_lstsize(stack_a);

	aux = stack_a;
	x = search(stack_a);
	while (aux)
	{
		if (aux->cont == x)
			aux->inde = 1;
		aux = aux->next;
	}
	while (y != 0)
	{
		x = ft_search_loop(stack_a, x, z);
		y--;
		z++;
	}
}

void	ft_100(t_list_plus *stack_a, t_list_plus *stack_b)
{
	int	i;
	t_list_plus	*aux;
/* 	int	x;
	int	n;
	int ppp; */

/* 	n = 0; */
	if (!stack_a && !stack_b)
		exit(1);
	i = 0;
	aux = stack_a;
	while (aux)
	{
		if ((stack_a->inde >> 0) & 1)
		{
			printf("hola\n");
			aux = aux->next;
		}
		else
		{
			printf("caracola\n");
			aux = aux->next;
		}
	}

/* 	while (n <= 25)
	{
		x = 0;
		i = 0;
		while (x <= 25)
		{
			if ((stack_a->inde >> i) & 1)
				ft_ra(&stack_a, 0);
			else
				ft_pb(&stack_b, &stack_a);
			x++;
			i++;
			ppp = ft_lstsize(stack_b);
			while (ppp != 1)
			{
				ppp = ft_lstsize(stack_b);
				ft_pa(&stack_a, &stack_b);
			}
		}
		n++;
	} */
	printf("Estamos en ello\n");
}

