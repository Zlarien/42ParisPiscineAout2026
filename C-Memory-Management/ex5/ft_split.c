/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:53:13 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/17 20:31:29 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	compte_mots(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i])
			c++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (c);
}

char	*get_word(char *str, int *i, char *charset)
{
	int		s;
	char	*w;
	int		j;

	while (is_sep(str[*i], charset))
		(*i)++;
	s = *i;
	while (str[*i] && !is_sep(str[*i], charset))
		(*i)++;
	w = malloc(sizeof(char) * (*i - s + 1));
	if (!w)
		return (NULL);
	j = 0;
	while (s + j < *i)
	{
		w[j] = str[s + j];
		j++;
	}
	w[j] = '\0';
	return (w);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	if (str == NULL || charset == NULL)
		return (NULL);
	n = compte_mots(str, charset);
	tab = malloc(sizeof(char *) * (n + 1));
	if (!tab)
		return (NULL);
	while (j < n)
	{
		tab[j] = get_word(str, &i, charset);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
/*
int	main(void)
{
	char	**str;

	str = ft_split("Bonjour comment ca,va", ", ");
	printf("%s et  %s et %s et %s", str[0],str[1],str[2], str[3]);
}*/
