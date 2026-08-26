/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:14:44 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/26 12:40:11 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int (i) = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dp;

	int (i) = 0;
	dp = malloc(str_len(str) + 1);
	if (!dp)
		return (NULL);
	while (str[i])
	{
		dp[i] = str[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}

void	free_tab(struct s_stock_str *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(*tab) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = str_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
		{
			free_tab(tab, i);
			return (NULL);
		}
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	putnbr(int nbr)
{
	char	c;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		c = '0' + nbr;
		write(1, &c, 1);
	}
	if (nbr >= 10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int (i) = 0;
	while (par[i].str)
	{
	print_str(par[i].str);
		putnbr(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
		i++;
	}
}

int	main(int ac, char **av)
{
	struct s_stock_str *tab;
	tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
	return (0);
}*/
