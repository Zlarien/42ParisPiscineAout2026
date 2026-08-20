/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:25:18 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/09 12:46:24 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 5, 7, 2, 3};
	ft_rev_int_tab(tab, 5);
	printf("%d et %d et %d et %d\n", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
