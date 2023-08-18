/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argo_middle_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_search_loop(t_list_plus *stack_a, int y, int z)
{
	int	x;
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