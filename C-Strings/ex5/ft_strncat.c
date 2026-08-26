/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: moahamad <moahamad@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/18 10:48:51 by moahamad	       #+#    #+#	      */
/*   Updated: 2026/08/22 19:02:34 by moahamad         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = str_len(dest);
	while (src[j] && j < nb)
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
	dest[0] = 'B';
	dest[1] = '\0';
	char *src = "Tonton";
	printf("%s",ft_strncat(dest,src,5));
}*/
