/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/27 15:04:28 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

int        main(void)
{
    char *str;

    str = "alex";
    ft_putstr(str);
	ft_putchar('\n');
    return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
