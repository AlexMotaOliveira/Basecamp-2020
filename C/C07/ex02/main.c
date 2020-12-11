/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/05 01:40:04 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int        main()
{
    int min;
    int max;
    int size;

    min = -60;
    max = 10;
    size = max - min;

	
	int a = 0;
	int *b = &a;
	int **array = &b;

    printf("%d\n",ft_ultimate_range(array, min, max));
    return 0;
}
