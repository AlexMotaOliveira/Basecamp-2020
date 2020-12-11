/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:49:08 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 21:07:57 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int count = 0;
	while(count++ <= 10)
 
	//if (ft_is_prime(count) != 0)
		printf("%d numero: %d\n", count ,ft_is_prime(count));
}