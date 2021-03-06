/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:27:01 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char src[] = "2";
	ft_str_is_uppercase(src);
	printf("é um numero %s\n", src);
	printf("%d\n", ft_str_is_uppercase(src));

	char src2[] = "alex";
	ft_str_is_uppercase(src2);
	printf("são letras minusculas %s\n", src2);
	printf("%d\n", ft_str_is_uppercase(src2));

	char src3[] = "ALEX";
	ft_str_is_uppercase(src3);
	printf("contem letras maiusculas %s\n", src3);
	printf("%d\n", ft_str_is_uppercase(src3));

	char src4[] = "";
	ft_str_is_uppercase(src4);
	printf("esta vazio %s\n", src4);
	printf("%d\n", ft_str_is_uppercase(src4));
	
	return (0);
}