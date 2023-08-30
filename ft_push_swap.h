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
	long			cont;
	long			inde;
	struct s_list	*next;
}			t_list_plus;

int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_putstr(char *s);
void		ft_isnumber(char *number);
void		ft_exit(void);
long		ft_atoi(const char *str);
void		ft_perfect(t_list_plus *stack_a);
void		ft_check(char *a);
void		ft_diferent(t_list_plus *stack_a);
void		ft_index(t_list_plus *stack_a);
long		ft_search_loop(t_list_plus *stack_a, int num_use, int index_num);
void		ft_select(t_list_plus *stack_a);
void		twoarg(t_list_plus **stack_a);
void		threearg(t_list_plus **stack_a);
long		search(t_list_plus *stack_a);
void		ft_four(t_list_plus *stack_a, t_list_plus *stack_b);
void		moves_in_five(t_list_plus **stack_a);
void		ft_five(t_list_plus *stack_a, t_list_plus *stack_b);
long		ft_contloop(t_list_plus *stack_a);
void		ft_radix(t_list_plus **stack_a, t_list_plus **stack_b, int i);
void		ft_algoritm(t_list_plus **stack_a, t_list_plus **stack_b, int cl);
void		create_stack(t_list_plus **lst, long n);
void		ft_pab(t_list_plus **src, t_list_plus **dest, int bool);
void		ft_sab(t_list_plus *lst, int bool);
void		ft_rrab(t_list_plus **lst, int bool);
void		ft_rab(t_list_plus **stack_a, int bool);
void		ft_rr(t_list_plus **lst, t_list_plus **lst2, char *string);
void		ft_lstadd_front(t_list_plus **lst, t_list_plus *new);
void		ft_lstadd_back(t_list_plus **lst, t_list_plus *new);
t_list_plus	*ft_lstlast(t_list_plus *lst);
t_list_plus	*ft_lstlast_two(t_list_plus *lst);
t_list_plus	*ft_lstnew(long n);
long		ft_lstsize(t_list_plus *lst);
void		ft_lstclear(t_list_plus **lst);
void		ft_lstdelone(t_list_plus *lst);
#endif
