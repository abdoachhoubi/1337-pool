/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:00:16 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/03 22:13:31 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Counts the length of a string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// Return the sign and changes the index
int	ft_sign_index(char *str, int *index)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

// Checks if the base is valid or not
int	check_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

// Returns the index of nb in base if it exists
int	nb_base(char nb, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == nb)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char	*str, char *base)
{
	int	result;
	int	index;
	int	sign;
	int	i;
	int	v;

	i = 0;
	result = 0;
	v = check_valid(base);
	if (v >= 2)
	{
		sign = ft_sign_index(str, &i);
		index = nb_base(str[i], base);
		while (index != -1)
		{
			result = (result * v) + index;
			i++;
			index = nb_base(str[i], base);
		}
		return (result *= sign);
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi_base("  		 ---++-1234sapo", "012345sa"));
	return (0);
}
