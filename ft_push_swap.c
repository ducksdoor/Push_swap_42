/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"



int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		x;
	int		a;

	stack_a = NULL;
	stack_b = ft_lstnew(0);
	if (!argc)
		ft_exit(3);
	x = 1;
	if (argc == 1)
		ft_exit(3);
	else if (argc == 3)
		twoarg (argv[1], argv[2]);

	else if (argc >= 4)
		while (x < argc)
		{
			a = 0;
			ft_check(argv[x]);
			a = ft_atoi(argv[x]);
			create_stack_a(&stack_a, a);
/* 			printf("DIR STACK:%p\n", stack); */
			x++;
			//printf("%d\n", stack->cont);
		}
	ft_diferent(stack_a);
	if (argc == 4)
		threearg (stack_a);
	if (argc == 5)
		ft_four(stack_a, stack_b);
/* 	else if (argc == 6)
		ft_four(argv[1], argv[2], argv[3], argv[4], argv[5]); */

//empiezan las pruebas, como cambia la forma de pedir los datos, dejo un ejemplo de cada...
/* 	showme(stack);
	ft_ra (&stack, 0);
	showme(stack);
	ft_sa(stack, 0); 
	showme(stack);
	stack = ft_rra(stack, 0);
	showme(stack); */
		//cierro prueba.

/* 	printf("PRE|%d|\n", stack->cont);
	
	ft_ra
	(&stack);
	printf("POST:%d\n", stack->cont); */
	//Comprobacion de que el ft_pa funciona:
/* 	ft_pa(&stack_a, &stack_b);
	printf("||||como se queda el stack_a despues de la función||||\n");
	showme(stack_a);
	printf("||||como se queda el stack_b despues de la función||||\n");
	showme(stack_b);
	printf ("Por ahora esta todo todito bien, o no, pero llegas al final jiji.");
	ft_pa(&stack_a, &stack_b);
	printf("||||como se queda el stack_a despues de la función||||\n");
	showme(stack_a);
	printf("||||como se queda el stack_b despues de la 2 función||||\n");
	showme(stack_b); */
	return (0);
}

/*
to do:

0 posible leaks en moves_change?

1 el proyecto tiene que aceptar negativos y ¿numeros como "+2"?

2 en check hay que comprar que los numeros esten dentro de los limites.

3 no has probado que se puedan usar los movimientos dobles

4 quiza estaria bien que todas las funciones pidieran y devolvieran lo mismo... peeero.
*/