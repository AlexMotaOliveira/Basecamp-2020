/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:31:43 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char src[] = "2";
	ft_str_is_printable(src);
	printf("é um numero %s\n", src);
	printf("%d\n", ft_str_is_printable(src));

	char src2[] = {127};
	ft_str_is_printable(src2);
	printf("não é printable %s\n", src2);
	printf("%d\n", ft_str_is_printable(src2));

	char src3[] = {10};
	ft_str_is_printable(src3);
	printf("não é printable %s\n", src3);
	printf("%d\n", ft_str_is_printable(src3));

	char src4[] = "";
	ft_str_is_printable(src4);
	printf("esta vazio %s\n", src4);
	printf("%d\n", ft_str_is_printable(src4));

	return (0);
}