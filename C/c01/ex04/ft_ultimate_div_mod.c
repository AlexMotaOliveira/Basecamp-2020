/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:44:04 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/27 00:20:15 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux_div;
	int aux_mod;

	aux_div = *a / *b;
	aux_mod = *a % *b;
	*a = aux_div;
	*b = aux_mod;
}
