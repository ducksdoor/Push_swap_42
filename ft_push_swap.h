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

int		ft_putchar(char s);
void	ft_putstr(char *s);
int		isnumber(char *number);
int		ft_atoi(const char *str);
int		twoarg(char *argv1, char *argv2);
int		threearg(char *argv1, char *argv2, char *argv3);
int		fourarg(char *argv1, char *argv2, char *argv3, char *argv4);
void	all_case_one(int a, int b, int c, int d);
void	all_case_four(int a, int b, int c, int d);
void	all_case_two(int a, int b, int c, int d);
#endif
