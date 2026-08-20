/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/11 18:42:12 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/17 22:23:42 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*vide(void)
{
	char	*c;

	c = malloc(1);
	if (c == NULL)
		return (NULL);
	c[0] = '\0';
	return (c);
}

int	calc_taille(int size, char **strs, char *sep)
{
	int	i;
	int	taille;

	i = 0;
	taille = 0;
	while (i < size)
	{
		taille += str_len(strs[i]);
		i++;
	}
	return (taille + (size - 1) * str_len(sep));
}

int	copie(char *dst, char *src, int pos)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dst[pos] = src[j];
		pos++;
		j++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		pos;
	char	*c;

	i = 0;
	if (strs == NULL || sep == NULL)
		return (NULL);
	if (size <= 0)
	{
		return (vide());
	}
	c = malloc(calc_taille(size, strs, sep) + 1);
	if (c == NULL)
		return (NULL);
	pos = 0;
	while (i < size)
	{
		pos = copie(c, strs[i], pos);
		if (i < size - 1)
			pos = copie(c, sep, pos);
		i++;
	}
	c[pos] = '\0';
	return (c);
}
/*
int	main(void)
{
	char	*tab[3];
	char	*res;

	tab[0] = "a";
	tab[1] = "b";
	tab[2] = "c";
	res = ft_strjoin(3, tab, "-");
	printf("[%s]\n", res);
	free(res);
	res = ft_strjoin(0, tab, "-");
	printf("[%s]\n", res);
	free(res);
	return (0);
}*/
