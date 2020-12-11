/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:39:58 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/24 23:11:41 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char number;

	number = 48;
	while (number <= 57)
	{
		ft_putchar(number);
		number++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
