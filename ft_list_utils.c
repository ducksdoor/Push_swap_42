
#include "ft_push_swap.h"

t_list	*ft_lstnew(int n)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = n;
	head->next = NULL;
	return (head);
}

/* void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
} */

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
				lst = lst->next;
		return (lst);
	}
	return (NULL);
}

/* t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*r;
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



int	ft_lstsize(t_list *lst)
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
