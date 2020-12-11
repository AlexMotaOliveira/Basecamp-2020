/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:56:23 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 01:14:23 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c);

int	main(int argc, char *argv[])
{
	char *num_aux;

	if (argc > 0)
	{
		num_aux = argv[0];
		write(1, num_aux, ft_strlen(num_aux));
		write(1, "\n", 1);
	}
	return (0);
}

int	ft_strlen(char *c)
{
	int count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}
