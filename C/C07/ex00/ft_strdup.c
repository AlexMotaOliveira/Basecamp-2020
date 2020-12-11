/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:00:33 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/05 02:20:18 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int        len;
	char    *src_dest;
	int        i;

	len = 0;
	while (src[len] != '\0')
		len++;
	src_dest = (char*)malloc(sizeof(char) * (len  + 1));
	if(src_dest == 0)
		return (0);
	i = -1;
	while (i++ < len -1)
		src_dest[i] = src[i];
	src_dest[i] = '\0';
	return (src_dest);
}
