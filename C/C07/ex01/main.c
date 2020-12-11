/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 22:34:11 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int    *ft_range(int min, int max);


int        main()
{
    int min;
    int max;
    int size;

    min = -60;
    max = 10;
    size = max - min;
    int *array;

	
    array = ft_range(min, max);
    int i = 0;
    while ( i < size)
	{
        printf ("Conteudo da variavel valor: %d\n", array[i]);
		i++;
	}
}