/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/25 20:42:17 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/26 00:08:51 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

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
