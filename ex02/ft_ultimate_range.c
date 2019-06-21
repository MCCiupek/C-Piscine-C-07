/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 21:27:08 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/19 22:24:10 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	if ((tab = (int *)malloc(sizeof(*range) * len)))
	{
		while (i < len)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (len);
	}
	return (-1);
}

