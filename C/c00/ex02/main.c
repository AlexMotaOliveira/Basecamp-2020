/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:03:23 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 17:44:07 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

int		main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}