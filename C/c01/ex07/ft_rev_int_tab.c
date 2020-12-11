/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:42:43 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/27 15:04:59 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int aux;
	int swap;

	count = 0;
	aux = size - 1;
	while (count < (size / 2))
	{
		swap = tab[count];
		tab[count] = tab[aux];
		tab[aux] = swap;
		count++;
		aux--;
	}
}
