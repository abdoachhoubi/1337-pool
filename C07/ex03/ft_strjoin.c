/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:10:17 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/02 14:32:12 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Count a string length
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// Counts the length of each string in an array and return the total
int	ft_strslen(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

// Counts the total size of memory that will be allocated
int	total_len(int size, char *sep, int strs_len)
{
	int	seps_len;

	seps_len = (size - 1) * ft_strlen(sep);
	return (seps_len + strs_len + 1);
}

// Copy or Concatenate depending on the index
char	*ft_strcpycat(char *dest, char *src, int *i)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[*i] = src [j];
		j++;
		*i += 1;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (size == 0)
		return ((char *)malloc(1));
	str = (char *)malloc(total_len(size, sep, ft_strslen(strs, size)));
	if (!str)
		return (0);
	while (i < size)
	{
		ft_strcpycat(str, strs[i], &j);
		if (i < size - 1)
		{
			ft_strcpycat(str, sep, &j);
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
