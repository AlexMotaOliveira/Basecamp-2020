/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fulfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:03:49 by hsantoro          #+#    #+#             */
/*   Updated: 2020/11/29 22:01:42 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fulfill_cu(char numbers[], char **matrix);
void	ft_fulfill_cd(char numbers[], char **matrix);
void	ft_fulfill_rl(char numbers[], char **matrix);
void	ft_fulfill_rr(char numbers[], char **matrix);

void	ft_fulfill(char numbers[], char **matrix)
{
	ft_fulfill_cu(numbers, matrix);
	ft_fulfill_cd(numbers, matrix);
	ft_fulfill_rl(numbers, matrix);
	ft_fulfill_rr(numbers, matrix);
}

void	ft_fulfill_cu(char numbers[], char **matrix)
{
	int y;
	int h;

	y = 0;
	h = 0;
	while (y++ < 4)
	{
		matrix[0][y] = numbers[h];
		if (numbers[h] == '1')
			matrix[1][y] = '4';
		if (numbers[h] == '4')
		{
			matrix[1][y] = '1';
			matrix[2][y] = '2';
			matrix[3][y] = '3';
			matrix[4][y] = '4';
		}
		h++;
	}
}

void	ft_fulfill_cd(char numbers[], char **matrix)
{
	int y;
	int h;

	y = 0;
	h = 4;
	while (y++ < 4)
	{
		matrix[5][y] = numbers[h];
		if (numbers[h] == '1')
			matrix[4][y] = '4';
		if (numbers[h] == '4')
		{
			matrix[4][y] = '1';
			matrix[3][y] = '2';
			matrix[2][y] = '3';
			matrix[1][y] = '4';
		}
		h++;
	}
}

void	ft_fulfill_rl(char numbers[], char **matrix)
{
	int y;
	int h;

	y = 0;
	h = 8;
	while (y++ < 4)
	{
		matrix[y][0] = numbers[h];
		if (numbers[h] == '1')
			matrix[y][1] = '4';
		if (numbers[h] == '4')
		{
			matrix[y][1] = '1';
			matrix[y][2] = '2';
			matrix[y][3] = '3';
			matrix[y][4] = '4';
		}
		h++;
	}
}

void	ft_fulfill_rr(char numbers[], char **matrix)
{
	int y;
	int h;

	y = 0;
	h = 12;
	while (y++ < 4)
	{
		matrix[y][5] = numbers[h];
		if (numbers[h] == '1')
			matrix[y][4] = '4';
		if (numbers[h] == '4')
		{
			matrix[y][4] = '4';
			matrix[y][3] = '3';
			matrix[y][2] = '2';
			matrix[y][1] = '1';
		}
		h++;
	}
}
