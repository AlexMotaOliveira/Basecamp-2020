/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:59:47 by hsantoro          #+#    #+#             */
/*   Updated: 2020/11/29 22:10:06 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_validation(int c, char m[], char numbers[]);
void	ft_fulfill(char numbers[], char **matrix);
void	ft_print_matrix(char **matrix);
void	ft_basic_6(char **matrix);
void	ft_basic_3(char **matrix);

int		main(int argc, char *argv[])
{
	char	*num_aux;
	char	*numbers;
	char	**matrix;
	int		j;

	num_aux = argv[1];
	numbers = (char*)malloc(16 * sizeof(char));
	ft_validation(argc, num_aux, numbers);
	j = -1;
	matrix = (char **)malloc(6 * sizeof(char *));
	while (j++ < 6)
		matrix[j] = (char *)malloc(6 * sizeof(char));
	ft_fulfill(numbers, matrix);
	ft_basic_6(matrix);
	ft_basic_3(matrix);
	ft_print_matrix(matrix);
	return (0);
}
