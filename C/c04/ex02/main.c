/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:03:23 by amota-br          #+#    #+#             */
/*   Updated: 2020/11/25 17:02:37 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int		main(void)
{
	ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(-42);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(1);
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    return (0);
}