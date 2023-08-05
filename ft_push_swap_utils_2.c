/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:15:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 20:06:40 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit(int a)
{
	if (a == 1)
		ft_putstr("Solo se pueden algoritmear numeros...");
	if (a == 2)
		ft_putstr("Tienes varios numeros repetidos");
	if (a == 3)
		ft_putstr("¿Se te olvido poner numeritos?");
	if (a == 4)
		ft_putstr("por muchos argumentos que pongas, solo ordeno números.");
	if (a == 5)
		ft_putstr("Es normal que con tanto número, repitas alguno...");
	exit (1);
}

void	ft_bzero(void *s, int n)
{
	char	*dst;
	int		x;

	dst = s;
	x = 0;
	while (x < n)
	{
		dst[x] = '\0';
		++x;
	}
}
