/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:36:47 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/06 15:51:45 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printd(char y, char z)
{
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_putnbr(int x, int y)
{
	char	l;

	l = x / 10 + '0';
	write(1, &l, 1);
	l = x % 10 + '0';
	write(1, &l, 1);
	write(1, " ", 1);
	l = y / 10 + '0';
	write(1, &l, 1);
	l = y % 10 + '0';
	write(1, &l, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnbr(a, b);
			if (a != 98)
			{
				ft_printd(',', ' ');
			}
			b++;
		}
		a++;
	}
}
/*
void main(void){
	ft_print_comb2();
}*/
