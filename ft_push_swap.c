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
	t_list	*stack;
	int		x;
	int		a;

	stack = NULL;
	if (!argc)
		exit(1);
	x = 1;
	if (argc == 1)
		ft_exit(3);
	else if (argc == 3)
		twoarg (argv[1], argv[2]);
	else if (argc == 4)
		threearg (argv[1], argv[2], argv[3]);
 	//else if (argc == 5)
		//fourarg (argv[1], argv[2], argv[3], argv[4]); 
	else if (argc > 4)
		while (x < argc)
		{
			a = 0;
			a = ft_atoi(argv[x]);
			create_stack_a(&stack, a);
/* 			printf("DIR STACK:%p\n", stack); */
			x++;
			//printf("%d\n", stack->cont);
		}
//empiezan las pruebas, como cambia la forma de pedir los datos, dejo un ejemplo de cada...
	showme(stack);
	ft_ra (&stack, 0);
	showme(stack);
	ft_sa(stack, 0); 
	showme(stack);
	stack = ft_rra(stack, 0);
	showme(stack);
		//cierro prueba.

/* 	printf("PRE|%d|\n", stack->cont);
	
	ft_ra
	(&stack);
	printf("POST:%d\n", stack->cont); */
	return (0);
} 

/*to do:
1 función que compruebe argumentos iguales para mas de 3 ...
2 no has probado que se puedan usar los movimientos dobles
3 quiza estaria bien que todas las funciones pidieran y devolvieran lo mismo...
*/