/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:22:08 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/18 10:47:14 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//char    *ft_strcpy(char *dest, char *src);

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = str_len(dest);
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*dest;
	dest = malloc(15);
	//ft_strcpy(dest, "Bonjour");
	//dest[0] = 'B';
	//dest[1] = '\0';
	char *src = "Tonton";
	printf("%s",ft_strcat(dest,src));
}*/
