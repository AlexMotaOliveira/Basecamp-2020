/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:15:27 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char src[] = "2";
	ft_str_is_alpha(src);
	printf("é um numero %s\n", src);
	printf("%d\n", ft_str_is_alpha(src));

	char src2[] = "Alex";
	ft_str_is_alpha(src2);
	printf("são letras %s\n", src2);
	printf("%d\n", ft_str_is_alpha(src2));

	char src3[] = "Ale2x";
	ft_str_is_alpha(src3);
	printf("contem numero %s\n", src3);
	printf("%d\n", ft_str_is_alpha(src3));

	char src4[] = "";
	ft_str_is_alpha(src4);
	printf("esta vazio %s\n", src4);
	printf("%d\n", ft_str_is_alpha(src4));
	
	return (0);
}