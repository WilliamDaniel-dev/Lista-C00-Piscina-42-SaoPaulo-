/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:18:03 by wdaniel-          #+#    #+#             */
/*   Updated: 2022/07/16 20:26:23 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha_rev;

	alpha_rev = 'z';
	while (alpha_rev >= 'a')
	{
		write (1, &alpha_rev, 1);
		alpha_rev--;
	}	
}
