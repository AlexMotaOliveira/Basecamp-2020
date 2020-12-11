/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:18:26 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 03:39:17 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int next;

	if (nb < 2)
		return (2);
	next = nb;
	while (ft_is_prime(next) != 1)
		next++;
	return (next);
}

int	ft_is_prime(int nb)
{
	int div;
	int limit_square;

	div = 2;
	limit_square = ft_sqrt(nb);
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
	if (nb <= 0)
		return (0);
	while (count++ <= sqrt)
		sqrt = (aux_nb / sqrt + sqrt) / 2;
	return (sqrt);
}
