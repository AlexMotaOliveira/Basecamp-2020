/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:52:47 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 18:42:48 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			i = 1;
		else if (str[count] >= 'A' && str[count] <= 'Z')
			i = 1;
		else
			return (0);
		count++;
	}
	return (i);
}
