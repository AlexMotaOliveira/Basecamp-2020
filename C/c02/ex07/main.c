/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:37:05 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
		char src[] = "2";
	ft_strupcase(src);
	printf("é um numero %s\n", src);
	

	char src2[] = "alex";
	ft_strupcase(src2);
	printf("são letras minusculas %s\n", src2);
	

	char src3[] = "Alex";
	ft_strupcase(src3);
	printf("contem letras maiusculas %s\n", src3);

	char src4[] = "";
	ft_strupcase(src4);
	printf("esta vazio %s\n", src4);

	

	return (0);
}