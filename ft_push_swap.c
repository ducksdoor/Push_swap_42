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
			printf("DIR STACK:%p\n", stack);
			x++;
			//printf("%d\n", stack->cont);
		}
	printf("PRE|%d|\n", stack->cont);
	ft_r_a_or_b(&stack);
	printf("POST:%d\n", stack->cont);
	return (0);
} 

/*to do:
1 función que compruebe argumentos iguales para mas de 3 ...
2 hacer función que printee el stack.
*/