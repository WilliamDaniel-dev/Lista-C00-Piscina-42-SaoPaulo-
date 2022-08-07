/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:53:36 by wdaniel-          #+#    #+#             */
/*   Updated: 2022/07/22 19:41:29 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_numbers(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	putchar(char c)
{
	write (1, &c, 1);
}

void	print_numbers(int a, int b, int c)
{
	putchar (a + '0');
	putchar (b + '0');
	putchar (c + '0');
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
