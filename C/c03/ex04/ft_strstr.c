/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:02:33 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/05 00:03:11 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int c_str;
	int c_equals;
	int c_words;
	int *null;

	c_words = 0;
	while (to_find[c_words] != '\0')
	c_words++;
	c_str = 0;
	if (c_words == 0)
		return (str);
	while (str[c_str + c_words - 1] != '\0')
	{
		c_equals = 0;
		while (str[c_str + c_equals] == to_find[c_equals])
		{
			c_equals += 1;
			if (c_equals == c_words)
				return (&str[c_str]);
		}
		c_str++;
	}
	return (null);
}
