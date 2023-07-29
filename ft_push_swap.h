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
# include <limits.h>

typedef struct s_list
{
	int				cont;
	struct s_list	*next;
}					t_list;

int		ft_putchar(char s);
void	ft_putstr(char *s);
int		ft_isnumber(char *number);
void	ft_exit(int a);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, int n);
void	*ft_calloc(size_t count, size_t size);

int		twoarg(char *argv1, char *argv2);
int		threearg(char *argv1, char *argv2, char *argv3);
void	ft_compro(char *argv1, char *argv2, char *argv3);
/* 
int		fourarg(char *argv1, char *argv2, char *argv3, char *argv4);

void	all_case_one(int a, int b, int c, int d);
void	all_case_four(int a, int b, int c, int d);
void	all_case_two(int a, int b, int c, int d);*/

void	create_stack_a(t_list **lst, int n);
void	create_stack_b(t_list *lst_b, int n);
void	ft_sa(t_list *lst, int bool);
void	ft_sb(t_list *lst, int bool);
void	ft_ss(t_list *lst, t_list *lst2);
void	ft_ra(t_list **lst, int bool);
void	ft_rb(t_list **lst, int bool);
void	ft_rs(t_list **lst, t_list **lst2);
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
