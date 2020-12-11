/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:47:36 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/30 16:44:16 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		aux_str(char letter);

char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ('a' <= str[count] && str[count] <= 'z')
		{
			if (count > 0 && (!(aux_str(str[count - 1]))))
				str[count] -= 'a' - 'A';
			else if (count == 0)
				str[count] -= 'a' - 'A';
		}
		else if ('A' <= str[count] && str[count] <= 'Z')
		{
			if (count > 0 && aux_str(str[count - 1]))
				str[count] += 'a' - 'A';
		}
		count++;
	}
	return (str);
}

int		aux_str(char letter)
{
	if ('a' <= letter && letter <= 'z')
		return (1);
	if ('A' <= letter && letter <= 'Z')
		return (1);
	if ('0' <= letter && letter <= '9')
		return (1);
	return (0);
}
