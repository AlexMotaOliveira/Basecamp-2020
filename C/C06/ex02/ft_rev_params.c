/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:16:27 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 03:33:03 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c);

int	main(int argc, char *argv[])
{
	int		count;
	char	*num_aux;
	int		aux_argc;

	aux_argc = argc - 1;
	count = 1;
	if (argc > 0)
	{
		while (count < argc)
		{
			num_aux = argv[aux_argc];
			write(1, num_aux, ft_strlen(num_aux));
			write(1, "\n", 1);
			count++;
			aux_argc--;
		}
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
