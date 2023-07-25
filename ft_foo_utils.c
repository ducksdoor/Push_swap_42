/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foo_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:33:39 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	all_case_one(int a, int b, int c, int d)
{
	if (a < b && a < c && a < d && b < c && b < d && c > d)
		ft_putstr ("definido opcion 1\n");
	else if (a < b && a < c && a < d && b > c && b < d && c < d)
		ft_putstr ("definido opcion 2\n");
	else if (a < b && a < c && a < d && b < c && b > d && c > d)
		ft_putstr ("definido opcion 3\n");
	else if (a < b && a < c && a < d && b > c && b > d && c < d)
		ft_putstr ("definido opcion 4\n");
	else if (a < b && a < c && a < d && b > c && b > d && c > d)
		ft_putstr ("definido opcion 5\n");
	else
		ft_putstr("ok\n");
}

void	all_case_four(int a, int b, int c, int d)
{
	if (a > b && a > c && a > d && b < c && b < d && c < d)
		ft_putstr("definido opcion 18\n");
	else if (a > b && a > c && a > d && b < c && b < d && c > d)
		ft_putstr("definido opcion 19\n");
	else if (a > b && a > c && a > d && b > c && b < d && c < d)
		ft_putstr("definido opcion 20\n");
	else if (a > b && a > c && a > d && b < c && b > d && c > d)
		ft_putstr("definido opcion 21\n");
	else if (a > b && a > c && a > d && b > c && b > d && c < d)
		ft_putstr("definido opcion 22\n");
	else if (a > b && a > c && a > d && b > c && b > d && c > d)
		ft_putstr("definido opcion 23\n");
}

void	all_case_two(int a, int b, int c, int d)
{
	if (a > b && a < c && a < d && b < c && b < d && c < d)
		ft_putstr("definido opcion 6\n");
	else if (a > b && a < c && a < d && b < c && b < d && c > d)
		ft_putstr("definido opcion 7\n");
	else if (a < b && a > c && a < d && b > c && b < d && c < d)
		ft_putstr("definido opcion 8\n");
	else if (a < b && a < c && a > d && b < c && b > d && c > d)
		ft_putstr("definido opcion 9\n");
	else if (a < b && a > c && a < d && b > c && b > d && c < d)
		ft_putstr("definido opcion 10\n");
	else if (a < b && a < c && a > d && b > c && b > d && c > d)
		ft_putstr("definido opcion 11\n");
	else if (a > b && a > c && a < d && b < c && b < d && c < d)
		ft_putstr("definido opcion 12\n");
	else if (a > b && a < c && a > d && b < c && b < d && c > d)
		ft_putstr("definido opcion 13\n");
	else if (a > b && a > c && a < d && b > c && b < d && c < d)
		ft_putstr("definido opcion 14\n");
	else if (a > b && a < c && a > d && b < c && b > d && c > d)
		ft_putstr("definido opcion 15\n");
	else if (a < b && a > c && a > d && b > c && b > d && c < d)
		ft_putstr("definido opcion 16\n");
	else if (a < b && a > c && a > d && b > c && b > d && c > d)
		ft_putstr("definido opcion 17\n");
}
