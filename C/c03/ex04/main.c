/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:07:02 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/03 01:36:27 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    printf("1: %s\n", ft_strstr("Testando", "st"));
    printf("2: %s\n", ft_strstr("O rato roeu a roupa do rei de Roma", "ro"));
    printf("3: %s\n", ft_strstr("Nao vai achar", "vai nada"));
    printf("4: %s\n", ft_strstr("Vai achar no fim", "fim"));
    printf("5: %s\n", ft_strstr("Logo no inicio vai ser encontrado", "Logo no inicio"));
    printf("6: %s\n", ft_strstr("Nao vai procurar nada", ""));
    printf("7: %s\n", ft_strstr("", "Vai procurar em lugar nenhum"));
    printf("8: %s\n", ft_strstr("", ""));
    printf("\n\n");
    printf("1: %s\n", strstr("Testando", "st"));
    printf("2: %s\n", strstr("O rato roeu a roupa do rei de Roma", "ro"));
    printf("3: %s\n", strstr("Nao vai achar", "vai nada"));
    printf("4: %s\n", strstr("Vai achar no fim", "fim"));
    printf("5: %s\n", strstr("Logo no inicio vai ser encontrado", "Logo no inicio"));
    printf("6: %s\n", strstr("Nao vai procurar nada", ""));
    printf("7: %s\n", strstr("", "Vai procurar em lugar nenhum"));
    printf("8: %s\n", strstr("", ""));
    return 0;
}