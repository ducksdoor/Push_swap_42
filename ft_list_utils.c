/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:31 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list_plus	*ft_lstnew(int n)
{
	t_list_plus	*head;

	head = malloc(sizeof(t_list_plus));
	if (!head)
		return (NULL);
	head->cont = n;
	head->next = NULL;
	return (head);
}

/* void	ft_lstiter(t_list_plus *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
} */

t_list_plus	*ft_lstlast(t_list_plus *lst)
{
	if (lst)
	{
		while (lst->next)
				lst = lst->next;
		return (lst);
	}
	return (NULL);
}

t_list_plus	*ft_lstlast_two(t_list_plus *lst)
{
	if (lst)
	{
		while (lst->next->next)
				lst = lst->next;
		return (lst);
	}
	return (NULL);
}

/* t_list_plus	*ft_lstmap(t_list_plus *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list_plus	*temp;
	t_list_plus	*r;
	void	*rr;

	if (!lst || !f || !del)
		return (NULL);
	r = NULL;
	while (lst)
	{
		rr = f(lst->content);
		temp = ft_lstnew(rr);
		if (!temp)
		{
			ft_lstclear(&r, del);
			del(rr);
			return (NULL);
		}
		ft_lstadd_back(&r, temp);
		lst = lst->next;
	}
	return (r);
} */



int	ft_lstsize(t_list_plus *lst)
{
	int	x;

	x = 0;
	while (lst)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}
