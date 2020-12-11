/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:07:02 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/03 22:40:13 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char aux_1[] = "abcd"; 
	char aux_2[] = "abc";

	printf("%d\n",ft_strcmp(aux_1, aux_2));
	printf("%d\n",strcmp(aux_1, aux_2));
	return 0;
}