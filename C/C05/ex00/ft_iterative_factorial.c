/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:12:27 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/03 13:21:00 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long fatorial;

	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		fatorial = 1;
		while (nb > 0)
			fatorial *= nb--;
	}
	return (fatorial);
}
