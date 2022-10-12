/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:11:54 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/10 11:05:46 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

void	ft_calc(int a, int b, char op)
{
	int	res;
	int	(*ops[5])(int, int);

	ops[0] = &ft_sub;
	ops[1] = &ft_sum;
	ops[2] = &ft_multiply;
	ops[3] = &ft_div;
	ops[4] = &ft_mod;
	res = 0;
	if (op == '-')
		res = ops[0](a, b);
	else if (op == '+')
		res = ops[1](a, b);
	else if (op == '*')
		res = ops[2](a, b);
	else if (op == '/')
		res = ops[3](a, b);
	else if (op == '%')
		res = ops[4](a, b);
	ft_putnbr(res);
}

void	do_op(char *a, char *b, char op)
{
	int	x;
	int	y;
	int	i;
	int	res;

	i = 0;
	res = 0;
	x = ft_atoi(a);
	y = ft_atoi(b);
	if (!(op == '-' || op == '+' || op == '*'
			|| op == '/' || op == '%'))
		write(1, "0", 1);
	else if (op == '/' && y == 0)
		write (1, "Stop : division by zero", 23);
	else if (op == '%' && y == 0)
		write (1, "Stop : modulo by zero", 21);
	else
		ft_calc(x, y, op);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[3], av[2][0]);
	return (0);
}
