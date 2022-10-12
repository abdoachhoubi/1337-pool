/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:44:07 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/07 18:24:20 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_charstr(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_seps_count(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_charstr(str[i], charset))
		i++;
	return (i);
}

int	ft_total_len(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_charstr(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_charstr(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_alloc_str(char *str, char *charset)
{
	int		len;
	int		i;
	char	*st;

	i = 0;
	len = ft_seps_count(str, charset);
	st = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		st[i] = str[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc(sizeof(char *)
			* (ft_total_len(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && ft_charstr(*str, charset))
			str++;
		if (*str != '\0')
		{
			strs[i] = ft_alloc_str(str, charset);
			i++;
		}
		while (*str && !ft_charstr(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
