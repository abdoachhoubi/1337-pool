/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:27:15 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/10 18:15:08 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min < max)
	{
		size = max - min;
		*range = (int *)malloc(size * sizeof(int));
		if (!*range)
		{
			*range = 0;
			return (-1);
		}
		i = 0;
		while (min < max)
		{
			*range[i] = min;
			min++;
			i++;
		}
		return (size);
	}
	*range = 0;
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	ft_ultimate_range(&tab, 0, 20);
	while (i < 7)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
