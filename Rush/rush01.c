/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:01:53 by ylarhris          #+#    #+#             */
/*   Updated: 2022/07/24 20:03:05 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first(int i, int n)
{
	while (i <= n)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == n)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	last(int i, int n)
{
	while (i <= n)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == n)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	middle(int i, int n)
{
	while (i <= n)
	{
		if ((i == 1) || (i == n))
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush01(int n, int m)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (n >= 0 && m >= 0)
	{
		while (j <= m)
		{
			if (j == 1)
				first(i, n);
			else if (j == m)
				last(i, n);
			else
				middle(i, n);
		j++;
		}
	}
	else
	{
		write(1, "error \n", 7);
		write(1, "n and m only accept positive values", 35);
	}
}
