/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:07:02 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/01 17:55:09 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int size = 3;
	char aux_1[] = "alMex"; 
	char aux_2[] = "alex";

	printf("%d\n",ft_strncmp(aux_2, aux_1, size));
	printf("%d\n",strncmp(aux_2, aux_1, size));
	
	return 0;
}

/*
** n=0 ""   "" -> 0
** n=0 ""   "abcde" -> 0
** n=0 "abc"   "abcde" -> 0
**
** n<diff  (n=3) "abc"   "abcde" -> 0
** 
** n=diff  (n=3) "abCde"   "abcde" -> 'c'
**
** n>diff  (n=10) "abc"   "abcde"  -> 'd'
** n>diff  (n=10) ""   "abcde"  -> 'a'
** n>diff  (n=10) ""   ""  -> 0
*/