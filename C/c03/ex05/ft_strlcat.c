/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:05:52 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 23:44:03 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned long count;
	unsigned long count_src;

	count = 0;
	count_src = 0;
	while (dest[count] != '\0')
		count++;
	if (src[count_src] == 0)
		return (count);
	while (src[count_src] != '\0' && count_src < size - 1)
	{
		if (size == 0)
			break ;
		dest[count + count_src] = src[count_src];
		count_src++;
	}
	dest[count + count_src] = '\0';
	return (count + count_src);
}
