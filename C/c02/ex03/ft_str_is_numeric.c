/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 23:19:21 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 18:42:55 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
			i = 1;
		else
			return (0);
		count++;
	}
	return (i);
}
