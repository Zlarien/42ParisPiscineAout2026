/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/10 10:05:30 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/10 19:36:01 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] = str[i] + 32;
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (i > 0
			&& !(((str[i - 1] >= '0' && str[i - 1] <= '9'))
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
void	main(void)
{
	char str[] = "N\rR5x$!PCZJ-r#hAh\nc<w'{:iDc~";
	printf("%s\n",ft_strcapitalize(str));
}*/
