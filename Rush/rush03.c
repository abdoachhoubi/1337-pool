/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:03:32 by ylarhris          #+#    #+#             */
/*   Updated: 2022/07/24 20:03:08 by ylarhris         ###   ########.fr       */
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
			ft_putchar('A');
		else if (i == n)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	write(1, "\n", 1);
}

void	middle(int i, int n)
{
	while (i <= n)
	{
		if (i == n || i == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	write(1, "\n", 1);
}

void	rush03(int n, int m)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (n >= 0 && m >= 0)
	{
		while (j <= m)
		{
			i = 1;
			if (j == 1 || j == m)
				first(i, n);
			else
			{
				middle(i, n);
			}
		j++;
		}
	}
	else
	{
		write(1, "error \n", 7);
		write(1, "n and m only accept positive values", 35);
	}
}
