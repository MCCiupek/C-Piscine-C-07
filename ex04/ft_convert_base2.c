/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 01:23:53 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/21 13:35:34 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_check_base(char *base);

char	*ft_write_putnbr_base(long nbr, char *base, int b, int signe)
{
	int		i;
	int		len;
	char	*tab;
	long	n;

	i = 0;
	len = 0;
	n = nbr;
	while (n / b > 0)
	{
		len++;
		n = n / b;
	}
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1 + signe))))
		return (NULL);
	if (signe == 1)
		tab[0] = '-';
	tab[len + signe] = '\0';
	while (len + signe >= signe)
	{
		tab[len + signe] = base[nbr % b];
		nbr = nbr / b;
		len--;
	}
	return (tab);
}

char	*ft_putnbr_base(long nbr, char *base_to, int signe)
{
	int		b;
	char	*tab;

	if ((nbr > 2147483648 && signe == 1) || (nbr > 2147483647 && signe == 0))
		return (NULL);
	b = ft_check_base(base_to);
	if (b < 2)
		return (0);
	tab = ft_write_putnbr_base(nbr, base_to, b, signe);
	return (tab);
}
