/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:42:43 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/26 22:29:29 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int aux;
	int swap;

	count = 0;
	aux = size - 1;
	while (count < (size / 2))
	{
		swap = tab[count];
		tab[count] = tab[aux];
		tab[aux] = swap;
		count++;
		aux--;
	}
	count = 0;
	while (size > 0)
	{
		ft_putchar(*(tab + count) + 48);
		size--;
		count++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
