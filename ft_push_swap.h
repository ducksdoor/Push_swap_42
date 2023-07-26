/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:49 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 21:35:46 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}					t_list;

int		ft_putchar(char s);
void	ft_putstr(char *s);
int		isnumber(char *number);
int		ft_atoi(const char *str);
int		twoarg(char *argv1, char *argv2);
int		threearg(char *argv1, char *argv2, char *argv3);
/* int		fourarg(char *argv1, char *argv2, char *argv3, char *argv4); */
void	all_case_one(int a, int b, int c, int d);
void	all_case_four(int a, int b, int c, int d);
void	all_case_two(int a, int b, int c, int d);

t_list	*create_stack(int n);

//void	ft_lstdelone(t_list *lst, void (*del)(void*));
//void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
//	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
//t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(int n);
int	    ft_lstsize(t_list *lst);
#endif
