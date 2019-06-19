/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:32:39 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/19 15:32:27 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char src[10] = "   01234ab";
	
	(void)argc;
	(void)argv;
	printf("ft_strdup(%s) = %s\nstrdup(%s) = %s", src, ft_strdup(src), src, strdup(src));
}
