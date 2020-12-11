/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:08:11 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:49:03 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);
{
	unsigned int count;
	unsigned int count_src;

	count_src = 0;
	while (src[count_src] != '\0')
	{
		count_src++;
	}
	count = 0;
	while (src[count] != '\0' && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count_src);
}
