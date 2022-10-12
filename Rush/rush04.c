/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:04:52 by ylarhris          #+#    #+#             */
/*   Updated: 2022/07/24 20:03:09 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first(int i, int n)
{
	while (i <= n)
	{
		if (i == 1)
			write(1, "A", 1);
		else if (i == n)
			write(1, "C", 1);
		else
			write(1, "B", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	last(int i, int n)
{
	while (i <= n)
	{
		if (i == 1)
			write(1, "C", 1);
		else if (i == n)
			write(1, "A", 1);
		else
			write(1, "B", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	middle(int i, int n)
{
	while (i <= n)
	{
		if (i == n || i == 1)
			write(1, "B", 1);
		else
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
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
			i = 1;
			if (j == 1)
				first(i, n);
			else if (j == m)
				last(i, n);
			else
			{
				middle(i, n);
			}
		j++;
		}
	}
	else
	{
		write(1, "error \n negative inputs", 23);
	}
}
