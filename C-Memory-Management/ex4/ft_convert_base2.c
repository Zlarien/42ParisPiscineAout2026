/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/12 11:18:12 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/17 15:51:41 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(char *str);

int	combien(char nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == nbr)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	calc_t(int val, int ato)
{
	int	i;

	if (val == 0)
		return (1);
	i = 0;
	while (val != 0)
	{
		val = val / ato;
		i++;
	}
	return (i);
}

int	b_dec(char *nbr, int afrom, char *base)
{
	int	s;
	int	sign;
	int	i;

	s = 0;
	sign = 1;
	i = 0;
	if (nbr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (combien(nbr[i], base) != -1)
	{
		s = s * afrom + combien(nbr[i], base);
		i++;
	}
	return (s * sign);
}

char	*dec_b(int val, int ato, char *base_to)
{
	int		len;
	int		neg;
	char	*ch;

	neg = 0;
	if (val < 0)
		neg = 1;
	if (val > 0)
		val = -val;
	len = calc_t(val, ato) + neg;
	ch = malloc(len + 1);
	if (ch == NULL)
		return (NULL);
	ch[len] = '\0';
	if (neg)
		ch[0] = '-';
	while (len > neg)
	{
		len--;
		ch[len] = base_to[-(val % ato)];
		val = val / ato;
	}
	return (ch);
}

char	*ft_convert_base2(char *nbr, char *base_from, char *base_to)
{
	int	val;

	val = b_dec(nbr, str_len(base_from), base_from);
	return (dec_b(val, str_len(base_to), base_to));
}
