/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsantoro <hsantoro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:36:57 by hsantoro          #+#    #+#             */
/*   Updated: 2020/11/29 21:40:59 by hsantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_6(char **matrix)
{
	int counter;

	counter = 1;
	while (counter++ < 4)
	{
		if (matrix[1][counter] == '1' && matrix[0][counter] == '2')
			matrix[2][counter] = '4';
		if (matrix[4][counter] == '1' && matrix[5][counter] == '2')
			matrix[3][counter] = '4';
		if (matrix[counter][1] == '1' && matrix[counter][0] == '2')
			matrix[counter][2] = '4';
		if (matrix[counter][4] == '1' && matrix[counter][5] == '2')
			matrix[counter][3] = '4';
	}
}
