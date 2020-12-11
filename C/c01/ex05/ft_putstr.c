/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:54:21 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/27 00:30:03 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != 0)
	{
		ft_putchar(*(str + count));
		count++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
