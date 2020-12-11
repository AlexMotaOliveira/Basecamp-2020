/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:41:09 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 13:30:03 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str);

int main()
{
   char str[100] = "        \n\v\r\t\f+-+-+--+--2147483648";

   printf("conversao= %d\n", ft_atoi(str));



   return(0);
}