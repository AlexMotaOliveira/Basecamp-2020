/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:07:02 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 18:06:05 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main () {
  char stra1[1000], stra2[1000];

  strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
  strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n" );
  printf("String before concatenation: \"%s\"", stra1);
  printf("\n");
  strncat(stra1, stra2, 0);
  printf("\nString after concatenation: \"%s\"", stra1);
  printf("\n--------\n");

char stra3[1000], stra4[1000];
  strcpy(stra3, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
  strcpy(stra4, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n" );
  printf("String before concatenation: \"%s\"", stra3);
  printf("\n\n");
  ft_strncat(stra3, stra4, 0);
  printf("\nString after concatenation: \"%s\"", stra3);
  printf("\n--------\n");

  return(0);
}
