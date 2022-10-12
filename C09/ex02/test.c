/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:25:07 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/07 18:26:13 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split.h"

int	main(int ac, char **av)
{
	char	**strs;
	int		i;

	(void)ac;
	strs = ft_split(av[1], av[2]);
	i = 0;
	while (i < 3)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}
