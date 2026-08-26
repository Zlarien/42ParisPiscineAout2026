/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 23:04:04 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/24 15:51:20 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	tri;

	i = 0;
	tri = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			if (tri == 0)
				tri = 1;
			else if (tri == -1)
				return (0);
		}
		else if (f(tab[i], tab[i + 1]) > 0)
		{
			if (tri == 0)
				tri = -1;
			else if (tri == 1)
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int     est_trier(int a, int b)
{
        if (a < b)
                return (a-b);
	else if (a == b)
		return (0);
	else
		return (a+b);
}

#include <stdio.h>
int     main(void)
{
        int tab[] = {1,2,4,4};
        int     res;
        res = ft_is_sort(tab,4, &est_trier);
        printf("%i\n", res);
        return (0);
}*/
