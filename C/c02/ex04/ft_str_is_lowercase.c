/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 23:24:53 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 18:43:03 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			i = 1;
		else
			return (0);
		count++;
	}
	return (i);
}
