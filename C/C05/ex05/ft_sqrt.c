/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:26:41 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 17:38:43 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int aux_nb;
	long int sqrt;
	long int count;

	aux_nb = nb;
	sqrt = 1;
	count = 0;
	if (nb <= 0)
		return (0);
	while (count++ <= sqrt)
	{
		sqrt = (aux_nb / sqrt + sqrt) / 2;
		if (sqrt * sqrt == nb)
			return (sqrt);
	}
	return (0);
}
