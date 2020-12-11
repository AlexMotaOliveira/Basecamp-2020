/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:24:20 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 15:41:13 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
char src[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
ft_strcapitalize(src);
printf("%s\n", src);


	return (0);
}