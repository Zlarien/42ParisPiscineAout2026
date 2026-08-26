/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 22:47:18 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/24 15:57:58 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = malloc(sizeof(int) * length);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
/*
int	addnbr(int nbr)
{
	return (nbr + 10);
}

#include <stdio.h>
int     main(void)
{
        int     tab[] = {5, 2, 30};
	int 	*res;
        res = ft_map(tab, 3, &addnbr);
	int	i;
	i = 0;
	while (i < 3)
	{
		printf("%i\n", res[i]);
		i++;
	}
        return (0);
}*/
