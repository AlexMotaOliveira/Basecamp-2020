/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:05:32 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 21:02:39 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int produt;

	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
	{
		produt = 1;
		while (power > 0)
		{
			produt *= nb;
			power--;
		}
		return (produt);
	}
}
