/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 22:58:14 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/24 15:39:19 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			j++;
		i++;
	}
	return (j);
}
/*
int     renvu(char *str)
{
        if (str[0] == '2')
                return (0);
        return (1);
}

#include <stdio.h>
int     main(void)
{
        char *tab[] = {"2bonjour","s24454","32","police"};
        int     res;
        res = ft_count_if(tab,4, &renvu);
        printf("%i\n", res);
        return (0);
}*/
