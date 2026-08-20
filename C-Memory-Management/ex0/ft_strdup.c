/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 21:38:13 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/17 20:26:16 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	if (src == NULL)
		return (NULL);
	i = 0;
	str = malloc(ft_strlen(src) + 1);
	if (str != NULL)
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	else
		return (NULL);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Bonjour";
	char	*ca = ft_strdup(str);
	str = "Bye";
	printf("%s et %s",str,ca);
}*/
