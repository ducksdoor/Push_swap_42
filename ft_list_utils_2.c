
#include "ft_push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	temp = ft_lstlast(*lst);
	if (temp)
		temp->next = new;
	else
		*lst = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{	
		new->next = *lst;
		*lst = new;
	}
}

/* void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*more;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		more = temp->next;
		del (temp->content);
		free(temp);
		temp = more;
	}
	free(temp);
	*lst = NULL;
} */

/* void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
} */