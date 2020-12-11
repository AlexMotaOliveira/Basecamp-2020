/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:08:11 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/03 14:36:02 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int count_src;

	count_src = 0;
	while (src[count_src] != '\0')
		count_src++;
	count = 0;
	if (count_src == 0)
		return (count_src);
	while ((src[count] != '\0' && count < size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count_src);
}
