/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:33:22 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 12:13:09 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_is_prime(int nb)
{
	int		div;
	int		limit_square;

	div = 2;
	limit_square = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	while (div <= limit_square)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	long aux_nb;
	long sqrt;
	long count;

	aux_nb = nb;
	sqrt = 1;
	count = 0;
	if (nb < 1)
		return (0);
	while (count++ <= sqrt)
		sqrt = (aux_nb / sqrt + sqrt) / 2;
	return (sqrt);
}
