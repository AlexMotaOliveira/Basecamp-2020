/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/26 21:21:34 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int 	main(void)
{
	int aux_b = 10;
	int *b = &aux_b;

	int aux_a = 25;
	int *a = &aux_a;	

	ft_div_mod(aux_b,aux_a,b,a);
	printf("%d\n", aux_b);
	printf("%d\n", aux_a);
}
