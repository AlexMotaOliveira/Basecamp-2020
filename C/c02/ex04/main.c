/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:24:07 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char src[] = "2";
	ft_str_is_lowercase(src);
	printf("é um numero %s\n", src);
	printf("%d\n", ft_str_is_lowercase(src));

	char src2[] = "alex";
	ft_str_is_lowercase(src2);
	printf("são letras minusculas %s\n", src2);
	printf("%d\n", ft_str_is_lowercase(src2));

	char src3[] = "Ale2x";
	ft_str_is_lowercase(src3);
	printf("contem letras maiusculas %s\n", src3);
	printf("%d\n", ft_str_is_lowercase(src3));

	char src4[] = "";
	ft_str_is_lowercase(src4);
	printf("esta vazio %s\n", src4);
	printf("%d\n", ft_str_is_lowercase(src4));
	
	return (0);
}
