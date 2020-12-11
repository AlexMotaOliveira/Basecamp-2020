/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:41:31 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char src[] = "2";
	ft_strlowcase(src);
	printf("é um numero %s\n", src);
	

	char src2[] = "ALEXZ";
	ft_strlowcase(src2);
	printf("são letras minusculas %s\n", src2);
	

	char src3[] = "Alex";
	ft_strlowcase(src3);
	printf("contem letras maiusculas %s\n", src3);

	char src4[] = "";
	ft_strlowcase(src4);
	printf("esta vazio %s\n", src4);

	return (0);
}