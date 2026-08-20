/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:58:58 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/17 17:40:18 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	if (min >= max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min));
	if (str == NULL)
	{
		return (NULL);
	}
	while (min + i < max)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*test = ft_range(10,19);
	int i = 0;
	while (test[i])
	{
		printf("%i\n", test[i]);
		i++;
	}
}*/
