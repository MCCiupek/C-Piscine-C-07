/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:46:47 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/19 21:25:30 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (NULL);
	if ((tab = (int *)malloc(sizeof(int) * len)))
	{
		while (i < len)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
	return (NULL);
}
