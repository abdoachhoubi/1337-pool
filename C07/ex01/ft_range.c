/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:27:14 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/10 18:08:44 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min < max)
	{
		size = max - min;
		arr = (int *)malloc(size * sizeof(int));
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (arr);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(12, 20);
	i = 0;
	while (i < 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
