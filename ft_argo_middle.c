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

int	ft_contloop(t_list_plus *stack_a)
{
	int y;
	int n;
	t_list_plus	*aux;

	aux = stack_a;
	y = 0;
	n = 1;
	while (aux)
	{
		while(y < 31)
		{
			if (((aux->inde >> y) & 1) && y > n)
				n = y;
			y++;
		}
		y = 0;
		aux = aux->next;
	}
	return(n);
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

void	ft_100(t_list_plus **stack_a, t_list_plus **stack_b, int cl)
{
	int	i;
	t_list_plus	*aux;
	t_list_plus	*aux_b;
	t_list_plus *aux_c;
	int	x;
	int	n;
	int ppp;

	int looking;
	int n_aux;
	/* int other_n_aux; */
	int more;

/* 	n = 0; */

	if (!stack_a && !stack_b)
		exit(1);
	looking = 0;
	i = 0;
	ppp = 0;
	while (i <= cl)
	{
		aux = *stack_a;
		n = 0;
		x = ft_lstsize(aux);
		more = 0;
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
				n_aux = 0;
				if (aux_b->inde == looking || (aux_b->inde == (looking + 1) && more == 1))
				{
					ft_rb(stack_b, 0);
					n_aux++;
					ppp++;
					more++;
				}
			}
			//contador/medidor para cerrar este bucle
			n++;
		}

		x = ft_lstsize(*stack_b);
		x = x - ppp;
		while (x > 0)
		{
			ft_pa(stack_b, stack_a);
			x--;
		}

		//controlador del radix
		i++;

		aux_c = ft_lstlast(*stack_b);
		if (aux_c->inde != 0)
		//si el ultimo no es cero:
		{
			//n aux es el numero de nodos que se mandaron abajo.
			if (n_aux == 1)
			{
				ft_rrb(stack_b, 0);
				looking++;
			}
			else
			{
				ft_rrb(stack_b, 0);
				ft_pa(stack_b, stack_a);
				ft_rrb(stack_b, 0);
				ft_pb(stack_a, stack_b);
			}

		}
	}
	while (looking >= 0)
	{
		ft_pa(stack_b, stack_a);
		looking--;
	}
}

