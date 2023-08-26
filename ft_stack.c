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

void	create_stack(t_list_plus **lst, long n)
{
	t_list_plus	*aux;

	if (n < -2147483648 || n > 2147483647)
	{
		ft_exit();
		exit(1);
	}
	aux = ft_lstnew(n);
	ft_lstadd_back(lst, aux);
}
