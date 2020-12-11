/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:07:26 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 13:28:08 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_char_special(char c);

int	ft_atoi(char *str)
{
	int nb;
	int count;
	int sign;

	nb = 0;
	count = 0;
	sign = 1;
	while (ft_char_special(str[count]))
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		nb = nb * 10 + str[count] - '0';
		count++;
	}
	return (nb * sign);
}

int	ft_char_special(char c)
{
	if (c == '+' || c == '\v' || c == ' ' || c == '-')
		return (1);
	else if (c == '\t' || c == '\f' || c == '\r' || c == '\n')
		return (1);
	return (0);
}
