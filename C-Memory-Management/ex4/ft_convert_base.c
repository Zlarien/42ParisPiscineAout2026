/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 20:16:32 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/17 20:30:50 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base2(char *nbr, char *base_from, char *base_to);

int	est_dej(char *str, char l)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == l)
			j++;
		i++;
	}
	if (j > 1)
		return (1);
	else
		return (0);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_v(char *str)
{
	int	i;

	i = 0;
	if (str_len(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| est_dej(str, str[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (nbr == NULL || base_from == NULL || base_to == NULL)
		return (NULL);
	if (base_v(base_from) && base_v(base_to))
		return (ft_convert_base2(nbr, base_from, base_to));
	else
		return (NULL);
}
/*
int	main(void)
{
	char *a = "1111";
	char *b = "01";
	char *c = "0123456789";
	printf("%s et %s fait %s\n",a,b, ft_convert_base(a,b,c));
}*/
