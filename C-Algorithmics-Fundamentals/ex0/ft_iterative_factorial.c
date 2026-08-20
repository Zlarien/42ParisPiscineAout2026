/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:16:50 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/06 16:48:38 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{
		c = c * nb;
		nb--;
	}
	return (c);
}
/*
void	main(void)
{
	printf("%d\n",ft_iterative_factorial(4));
}*/
