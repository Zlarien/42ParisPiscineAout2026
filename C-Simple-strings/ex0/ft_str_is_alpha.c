/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 14:55:32 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/09 16:35:14 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 90 && str[i] >= 65)
			|| (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char *str;
	str = "Bonjour";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}*/
