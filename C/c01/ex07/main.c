/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 18:17:11 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int array[7] = {1,2,3,4,5,6,7};
    int *b = array;
    ft_rev_int_tab(b, 7);

	int count = 0;
	while(count < 7)
	{
		printf("%d\n", array[count]);
		count++;	
	}
	printf("%d\n");
	
    return (0);
}
