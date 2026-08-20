/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:38:55 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/17 20:28:06 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*test;
	int	taille;
	taille = ft_ultimate_range(&test, 10,18);
	int	i = 0;
	while (i < taille)
	{
		printf("%i\n", test[i]);
		i++;
	}
}
*/
