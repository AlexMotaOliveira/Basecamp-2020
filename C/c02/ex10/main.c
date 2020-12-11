/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/03 14:36:32 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int size;

	size = 0;
	char dest[10] = "alex";
	char src[10] = "";
	
	
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", dest[0]);
	printf("%d\n", ft_strlcpy(dest, src, size));
	
	return (0);
}