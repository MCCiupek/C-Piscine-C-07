/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 22:24:34 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/23 18:19:30 by mciupek          ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		len;
	int		n;

	len = 0;
	i = -1;
	if (!size)
		return (tab = malloc(0));
	while (++i < size)
		len = len + ft_strlen(strs[i]);
	if (!(tab = malloc(sizeof(*strs) *
					(len + size * ft_strlen(sep) + 1))))
		tab = NULL;
	i = -1;
	n = 0;
	while (++i < size)
	{
		n = ft_strcat(tab, strs[i], n);
		if (i != size - 1)
			n = ft_strcat(tab, sep, n);
	}
	tab[n] = '\0';
	return (tab);
}
