/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:49:08 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 18:12:07 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int count = -5;
	while(count++ <= 12)
 
 	printf("%d numero: %d\n", count ,ft_iterative_factorial(count));
}