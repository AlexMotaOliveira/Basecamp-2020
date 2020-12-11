/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsantoro <hsantoro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 21:28:51 by hsantoro          #+#    #+#             */
/*   Updated: 2020/11/29 21:38:26 by hsantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_3a(char **matrix);

void	ft_basic_3(char **matrix)
{
	int counter;

	counter = 1;
	while (counter++ < 4)
	{
		if (matrix[2][counter] == '1' && matrix[0][counter] == '3')
		{
			matrix[1][counter] = '2';
			matrix[3][counter] = '3';
			matrix[4][counter] = '4';
		}
		if (matrix[3][counter] == '1' && matrix[5][counter] == '3')
		{
			matrix[4][counter] = '2';
			matrix[2][counter] = '3';
			matrix[1][counter] = '4';
		}
	}
	ft_basic_3a(matrix);
}

void	ft_basic_3a(char **matrix)
{
	int counter;

	counter = 1;
	while (counter++ < 4)
	{
		if (matrix[counter][2] == '1' && matrix[counter][0] == '3')
		{
			matrix[counter][1] = '2';
			matrix[counter][3] = '3';
			matrix[counter][4] = '4';
		}
		if (matrix[counter][3] == '1' && matrix[counter][5] == '3')
		{
			matrix[counter][4] = '2';
			matrix[counter][2] = '3';
			matrix[counter][1] = '4';
		}
	}
}
