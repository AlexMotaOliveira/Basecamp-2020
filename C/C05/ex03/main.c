/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:49:08 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 17:29:23 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(void)
{
	int count = -5;
	while(count++ < 10)
 	printf("%d numero: %d\n", count ,ft_recursive_power(2, count));
}