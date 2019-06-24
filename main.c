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
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str);
char *ft_strdup(char *src);
int *ft_range(int min, int max);
int ft_ultimate_range(int **range, int min, int max);
char *ft_strjoin(int size, char **strs, char *sep);
char **ft_split(char *str, char *charset);
int ft_size(char *str, char *charset);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
    //char src[10] = "coucou :)";
    //int min = -2000000;
    //int max = 2000000;
    //int *tab;
    //char *tab;
    //char **tab;
    //int i = 0;
    //int j;
    
	(void)argc;
    //(void)argv;
    
    //EX00 :
	//printf("ft_strdup(%s) = %s\nstrdup(%s) = %s", src, ft_strdup(src), src, strdup(src));
    
    //EX01 :
    //tab = ft_range(min, max);
    //while (i < max - min)
    //{
    //    printf("%d ", tab[i]);
    //    i++;
    //}
    
    //EX02 :
    /*printf("len(tab) = %d\n", ft_ultimate_range(&tab, min, max));
    while (i < max - min)
    {
        printf("%d ", tab[i]);
        i++;
    }*/
    
    //EX03 :
    /*tab = ft_strjoin(argc, argv, "_");
    while (tab[i])
    {
        printf("%c", tab[i]);
        i++;
    }*/
    
    //EX04 :
    printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
    
    //EX05 :
    /*tab = ft_split(argv[1], argv[2]);
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }*/
    
    //free(tab);
}
