/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:13:15 by rpaulino          #+#    #+#             */
/*   Updated: 2020/11/22 22:53:48 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_create_line(int x, int y, int c, int l)
{
	while (c <= x)
	{
		if (((c == 1) && (l == 1)) || ((c == x) && (l == y)))
		{
			ft_putchar('o');
		}
		else if (((c == x) && (l == 1)) || (c == 1 && l == y))
		{
			ft_putchar('o');
		}
		else if ((l == 1 || l == y) && (c <= x))
		{
			ft_putchar('-');
		}
		else if ((c == 1 || c == x) && (l <= y))
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		c++;
	}
	return (0);
}

int		ft_line_manager(int x, int y)
{
	int l;
	int c;

	l = 1;
	c = 1;
	while (l <= y)
	{
		c = 1;
		ft_create_line(x, y, c, l);
		ft_putchar('\n');
		l++;
	}
	return (0);
}

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	ft_line_manager(x, y);
	return (0);
}
