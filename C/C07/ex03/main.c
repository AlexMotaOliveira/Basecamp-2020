/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/05 04:39:21 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char    *ft_strjoin(int size, char **strs, char *sep);

int        main(void)
{
	char *argv[] = {"teste","teste1","teste2"};
	printf("%s\n", ft_strjoin(1, argv, ";"));
}
