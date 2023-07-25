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
	int	x;
	int	argnumber;

	x = 0;
	argnumber = 1;
	while (argnumber < argc)
	{
		x = isnumber(argv[argnumber]);
		if (x == -1)
		{
			ft_putstr("error");
			return (0);
		}
		argnumber++;
	}
	if (argc == 3)
		twoarg (argv[1], argv[2]);
	else if (argc == 4)
		threearg (argv[1], argv[2], argv[3]);
	else if (argc == 5)
		fourarg (argv[1], argv[2], argv[3], argv[4]);
	return (0);
}
