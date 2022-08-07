/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:42:40 by wdaniel-          #+#    #+#             */
/*   Updated: 2022/07/22 19:46:38 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int a, int b);

void	ft_print_comb2(int a, int b)
{
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b < 99)
		{
			print_number(a, b);
			b++;
		}
		a++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int a, int b)
{
	ft_putchar (a / 10 + 48);
	ft_putchar (a % 10 + 48);
	write(1, &" ", 1);
	ft_putchar (b / 10 + 48);
	ft_putchar (b % 10 + 48);
	if (!(a == 98))
	{
		write(1, ",", 1);
	}
}
