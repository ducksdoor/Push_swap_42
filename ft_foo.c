/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:28:49 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	twoarg(char *argv1, char *argv2)
{
	int	x;
	int	y;

	x = ft_atoi(argv1);
	y = ft_atoi(argv2);
	if (x == y)
	{
		ft_putstr("Numeros repetidos\n");
		exit(1);
	}
	if (x > y)
	{
		ft_putstr("sa");
		return (0);
	}
	else
		ft_putstr("ok\n");
	return (0);
}

int	threearg(char *argv1, char *argv2, char *argv3)
{
	int	n_one;
	int	n_two;
	int	n_three;

	n_one = ft_atoi(argv1);
	n_two = ft_atoi(argv2);
	n_three = ft_atoi(argv3);
	if (n_one == n_two || n_one == n_three || n_two == n_three)
	{
		ft_putstr("Numeros repetidos\n");
		exit(1);
	}
	if (n_one > n_two && n_two < n_three && n_three > n_one)
		ft_putstr("sa\n");
	else if (n_one > n_two && n_two > n_three && n_three < n_one)
		ft_putstr("sa\nrra\n");
	else if (n_one > n_two && n_two < n_three && n_three > n_two)
		ft_putstr("ra\n");
	else if (n_one < n_two && n_two > n_three && n_three > n_one)
		ft_putstr("sa\nra\n");
	else if (n_one < n_two && n_two > n_three && n_three < n_two)
		ft_putstr("rra\n");
	else
		ft_putstr("ok");
	return (0);
}

/* int	fourarg(char *argv1, char *argv2, char *argv3, char *argv4)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = ft_atoi(argv1);
	b = ft_atoi(argv2);
	c = ft_atoi(argv3);
	d = ft_atoi(argv4);
	if (a == b || a == c || b == c || a == d || b == d || c == d)
	{
		ft_putstr("Numeros repetidos\n");
		exit(1);
	}
	if (a < b && a < c && a < d)
		all_case_one (a, b, c, d);
	else if (a > b && a > c && a > d)
		all_case_four(a, b, c, d);
	else
		all_case_two(a, b, c, d);
	return (0);
} */


/*

1234-,-1243-,-1324-,-1342-,-1423-,1432- , 
2134- , -2143- , -2314- , -2341- , 2413 , 2431 , 
3124- , 3142- , 3214- , 3241- , -3412- , 3421- , 
4123 , 4132 , 4213 , 4231-- , 4312 , 4321.

 */
