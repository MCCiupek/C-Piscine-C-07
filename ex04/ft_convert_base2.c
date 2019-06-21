/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 01:23:53 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/21 02:03:37 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check_base(char *base);

char	*ft_write_putnbr_base(long nbr, char *base, int b)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = 0;
	if (nbr < 0)
	{
		len = 1;
		i = 1;
		tab[0] = '-';
		nbr = -nbr;
	}
	while (nbr / b > 0)
		len ++;
	while (i < len)
	{
		tab[i] = base[nbr % b];
		nbr = nbr / b;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_putnbr_base(int nbr, char *base_to)
{
	int		b;
	long	nb;
	char	*tab;

	nb = (long)nbr;
	b = ft_check_base(base_to);
	if (b < 2)
		return(0);
	tab = ft_write_putnbr_base(nb, base_to, b);
	return (tab);
}

