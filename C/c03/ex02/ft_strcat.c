/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:45:45 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/01 14:38:19 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int count_src;

	count = 0;
	while (dest[count] != '\0')
		count++;
	count_src = 0;
	while (src[count_src] != '\0')
	{
		dest[count + count_src] = src[count_src];
		count_src++;
	}
	dest[count + count_src] = '\0';
	return (dest);
}
