/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:15:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/07/25 20:06:40 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

long	ft_atoi(const char *str)
{
	long	res;
	long	sign;
	long	i;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	ft_isnumber(char *number)
{
	long	cont;

	cont = 0;
	while (number[cont])
	{
		if (number[cont] == 45 || number[cont] == 43)
		{
			if (number[cont + 1] > 47 && number[cont +1] < 58)
				cont++;
			else
				ft_exit();
		}
		else if ((number[cont] > 47 && number[cont] < 58))
			cont++;
		else
			ft_exit();
	}
}

void	ft_putstr(char *s)
{
	int	x;

	if (!s)
		return ;
	x = 0;
	while (s[x])
	{
		write(1, &s[x], 1);
		x++;
	}
	write (1, "\n", 1);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	int		dif;

	x = 0;
	dif = 0;
	while ((x < n) && !dif && (s1[x] != '\0') && (s2[x] != '\0'))
	{
		dif = (unsigned char)s1[x] - (unsigned char)s2[x];
		x++;
	}
	if (x < n && !dif && (s1[x] == '\0' || s2 [x] == '\0'))
		dif = (unsigned char)s1[x] - (unsigned char)s2[x];
	return (dif);
}

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit (1);
}
