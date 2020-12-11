/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:39:18 by hsantoro          #+#    #+#             */
/*   Updated: 2020/11/29 21:45:17 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_matrix(char **matrix)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 6)
	{
		while (y < 6)
		{
			if (matrix[x][y] == 0)
				ft_putchar('-');
			else
				write(1, &matrix[x][y], 1);
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
