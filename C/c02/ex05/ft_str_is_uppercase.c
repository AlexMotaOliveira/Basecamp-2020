/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 23:30:55 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 18:43:10 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			i = 1;
		else
			return (0);
		count++;
	}
	return (i);
}
