/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:58:46 by ylarhris          #+#    #+#             */
/*   Updated: 2022/07/26 15:17:46 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_and_last(int i, int n)
{
	while (i <= n)
	{
		if (i == n)
			ft_putchar('-');
		else if (i == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	middle(int i, int n)
{
	while (i <= n)
	{
		if (i == n)
			write(1, "|\n", 2);
		else if (i == 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int n, int m)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (n > 0 && m > 0)
	{
		while (j <= m)
		{
			i = 1;
			if (j == 1 || j == m)
				first_and_last(i, n);
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
