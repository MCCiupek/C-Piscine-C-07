/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 22:24:34 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/22 13:10:27 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcat(char *dest, char *src, int start)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[start + i] = src[i];
		i++;
	}
	return (start + i);
}

int		ft_is_last(char **strs, int start, int stop)
{
	while (start <= stop)
	{
		if (strs[start][0])
			return (0);
		start++;
	}
	return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		len;
	int		n;

	len = 0;
	i = 0;
	if (!size)
		return (tab = malloc(0));
	while (++i <= size)
		len = len + ft_strlen(strs[i]);
	if (!(tab = malloc(sizeof(*strs) *
					(len + (size - 1) * ft_strlen(sep) + 1))))
		tab = NULL;
	i = 0;
	n = 0;
	while (++i <= size)
		if (strs[i][0] != '\0')
		{
			n = ft_strcat(tab, strs[i], n);
			if (i != size && ft_is_last(strs, i + 1, size) == 0)
				n = ft_strcat(tab, sep, n);
		}
	tab[n] = '\0';
	return (tab);
}
