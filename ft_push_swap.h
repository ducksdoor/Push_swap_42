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
/* 
void		showme(t_list_plus *list, char *a);
 */
long		ft_putchar(char s);
void		ft_putstr(char *s);
long		ft_isnumber(char *number);
void		ft_exit(void);
long		ft_atoi(const char *str);
void		ft_bzero(void *s, int n);
void		*ft_calloc(size_t count, size_t size);
void		ft_perfect(t_list_plus *stack_a);
void		ft_check(char *a);
void		ft_diferent(t_list_plus *stack_a);
void		ft_index(t_list_plus *stack_a);
long		ft_search_loop(t_list_plus *stack_a, long y, long z);
void		ft_main2(t_list_plus *stack_a);
long		twoarg(char *argv1, char *argv2);
void		threearg(t_list_plus **stack_a);
long		search(t_list_plus *stack_a);
void		ft_four(t_list_plus *stack_a, t_list_plus *stack_b);
void		moves_in_five(t_list_plus **stack_a);
void		ft_five(t_list_plus *stack_a, t_list_plus *stack_b);
long		ft_contloop(t_list_plus *stack_a);
void		ft_radix(t_list_plus **stack_a, t_list_plus **stack_b, long i);
void		ft_100(t_list_plus **stack_a, t_list_plus **stack_b, long cl);
void		create_stack(t_list_plus **lst, long n);
void		ft_sa(t_list_plus *lst, long bool);
void		ft_sb(t_list_plus *lst, long bool);
void		ft_ss(t_list_plus *lst, t_list_plus *lst2);
void		ft_ra(t_list_plus **stack_a, long bool);
void		ft_rb(t_list_plus **stack_b, long bool);
void		ft_rs(t_list_plus **lst, t_list_plus **lst2);
void		ft_rra(t_list_plus **lst, long bool);
void		ft_rrb(t_list_plus **lst, long bool);
void		ft_rrr(t_list_plus *lst, t_list_plus *lst2);
void		ft_pb(t_list_plus **stack_a, t_list_plus **stack_b);
void		ft_pa(t_list_plus **stack_b, t_list_plus **stack_a);
void		ft_lstadd_front(t_list_plus **lst, t_list_plus *new);
void		ft_lstadd_back(t_list_plus **lst, t_list_plus *new);
t_list_plus	*ft_lstlast(t_list_plus *lst);
t_list_plus	*ft_lstlast_two(t_list_plus *lst);
t_list_plus	*ft_lstnew(long n);
long		ft_lstsize(t_list_plus *lst);
void		ft_lstclear(t_list_plus **lst);
void		ft_lstdelone(t_list_plus *lst);
#endif
