/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:00:14 by aachhoub          #+#    #+#             */
/*   Updated: 2022/07/27 16:52:37 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign_index(char *str, int *index)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	atoi;
	int	i;

	atoi = 0;
	sign = ft_sign_index(str, &i);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		atoi *= 10;
		atoi += str[i] - 48;
		i++;
	}
	atoi *= sign;
	return (atoi);
}
