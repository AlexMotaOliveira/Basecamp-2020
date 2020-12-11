/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:42:15 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/01 15:04:30 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	if (n == 0 || (s1[count] == '\0' && s2[count] == '\0'))
		return (0);
	while (s1[count] == s2[count])
	{
		count++;
		if (count == n)
			return (0);
	}
	return (s1[count] - s2[count]);
}
