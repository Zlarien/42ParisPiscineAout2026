/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:43:18 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/06 22:06:50 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
}
/*
void	main(void)
{
	printf("%d\n",ft_recursive_power(3, 3));
}*/
