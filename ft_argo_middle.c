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
	if (!stack_a && !stack_b)
		exit(1);


	printf("Estamos en ello");
}

