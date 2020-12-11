/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/26 18:01:59 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int f = 10;
	int *b = &f;

	int g = 25;
	int *a = &g;	
	
	ft_ultimate_div_mod(a,b);
	printf("%d\n", f);
	printf("%d\n", g);
}
