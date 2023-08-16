/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	create_stack(t_list **lst, int n)
{
	t_list	*aux;

	aux = ft_lstnew(n);
	ft_lstadd_back(lst, aux);
/* 	printf("contenido [%d]..", (*lst)->cont);
	printf("contenido aux [%d]..", aux->cont);
	printf("dirección del modulo 1 [%p]. Siguiente mod [%p] \n", (*lst)->next, aux);
	printf("DIR LST:%p\n", lst); */
}



// prueba...para create stack
/* int	main(int argc, char *argv[])
{
	//t_list	*stack;
	//int	a;
	//int x;

	if (!argc)
		exit(1);
	x = 1;
	while (x < argc)
	{
		a = ft_atoi(argv[x]);
		create_stack(&stack, a);
		x++;
	}
} */