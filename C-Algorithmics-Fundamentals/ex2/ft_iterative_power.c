/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:27:11 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/06 18:42:04 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	c;

	if (power < 0)
	{
		return (0);
	}
	c = 1;
	while (power > 0)
	{
		c = c * nb;
		power--;
	}
	return (c);
}
/*
void	main(void)
{
	printf("%d\n",ft_iterative_power(3,3));
}*/
