/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:52:49 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/01 15:05:32 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] == s2[count])
	{
		if (s1[count] == '\0' && s2[count] == '\0')
			return (0);
		count++;
	}
	return (s1[count] - s2[count]);
}
