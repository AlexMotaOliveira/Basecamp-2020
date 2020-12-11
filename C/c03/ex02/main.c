/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:07:02 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/01 15:02:52 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char aux_1[50] = "primeiro"; 
	char aux_2[50] = "segundo";

	char aux_3[50] = "primeiro"; 
	char aux_4[50] = "segundo";
	

	printf("%s\n",ft_strcat(aux_2, aux_1));

	printf("%s\n",strcat(aux_4, aux_3));
	return 0;
}