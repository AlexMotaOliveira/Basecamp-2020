/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:59:43 by hsantoro          #+#    #+#             */
/*   Updated: 2020/11/29 22:27:38 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_input_val(char m[]);
void	ft_error(void);

void	ft_validation(int c, char m[], char numbers[])
{
	int contador;
	int count;

	if (c != 2)
		ft_error();
	count = 0;
	contador = 0;
	while (m[count] != 0)
	{
		if (m[count] >= 49 && m[count] <= 52)
		{
			numbers[contador] = m[count];
			contador++;
		}
		count++;
	}
	ft_input_val(m);
}

void	ft_input_val(char m[])
{
	int i;
	int numbers;
	int spaces;

	i = 0;
	numbers = 0;
	spaces = 0;
	while (m[i] != '\0')
	{
		if (m[i] >= '1' && m[i] <= '4')
		{
			numbers++;
			i++;
		}
		if (m[i] == ' ')
			spaces++;
		i++;
	}
	if (numbers != 16 || spaces != 15)
		ft_error();
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}
