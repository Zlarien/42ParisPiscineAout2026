/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/10 13:14:34 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/10 18:27:54 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	d;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 126 && str[i] >= 32)
		{
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			c = "0123456789abcdef"[str[i] / 16];
			write(1, "\\", 1);
			write(1, &c, 1);
			d = "0123456789abcdef"[str[i] % 16];
			write(1, &d, 1);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	*str = "Hello\nHow are you ?";

	ft_putstr_non_printable(str);
	return (0);
}*/
