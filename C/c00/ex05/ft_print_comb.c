/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:20:24 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/26 11:43:05 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_printnumber(char n1, char n2, char n3);

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = 47;
	while (n1 < '7')
	{
		n1++;
		n2 = n1;
		while (n2 < '8')
		{
			n2++;
			n3 = n2;
			while (n3 < '9')
			{
				n3++;
				ft_printnumber(n1, n2, n3);
				if ((n1 != '7') || (n2 != '8') || (n3 != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnumber(char n1, char n2, char n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
}

