/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:07:02 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/04 23:45:13 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int size = 10;
	char aux_str[20] = "LaranjasAmarelas"; 
	char aux_dest[20] = "a ";

	char aux_str1[20] = "LaranjasAmarelas"; 
	char aux_dest1[20] = "a ";

	printf("%d\n",ft_strlcat(aux_dest, aux_str, size));
	printf("%s\n", aux_dest);
	printf("%d\n",strlcat(aux_dest1, aux_str1, size));
	printf("%s\n", aux_dest1);

	return 0;
}