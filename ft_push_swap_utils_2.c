/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:15:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 20:06:40 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit(void)
{
	ft_putstr("Error");
	exit (2);
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
