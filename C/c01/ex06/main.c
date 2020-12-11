/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 18:04:36 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);

int		main(void)
{
    char *str;

    str = "alex";
	printf("quantidade: %i\n", ft_strlen(str));
    return (0);
}