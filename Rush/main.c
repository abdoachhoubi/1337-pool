/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:45:02 by ylarhris          #+#    #+#             */
/*   Updated: 2022/07/26 15:19:19 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.c"

int	main(void)
{
	rush01(9, 9);
	write(1, "\n", 1);
	//rush01(9, 9);
	//ft_putchar('\n');
	//rush02(9, 9);
	//ft_putchar('\n');
	//rush03(9, 9);
	//ft_putchar('\n');
	//rush04(9, 9);
	//ft_putchar('\n');
	return (0);
}
