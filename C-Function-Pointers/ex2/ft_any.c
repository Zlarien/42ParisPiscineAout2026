/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/22 22:54:55 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/24 15:38:56 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int	renvu(char *str)
{
	if (str[0] == '2')
		return (0);
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char *tab[] = {"2bonjour","4454,2", 0};
	int	res;
	res = ft_any(tab, &renvu);
	printf("%i\n", res);
	return (0);
}*/
