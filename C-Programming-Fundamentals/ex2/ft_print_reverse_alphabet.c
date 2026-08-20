/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 19:01:04 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/05 19:21:03 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 26;
	c = 'z';
	while (i > 0)
	{
		write(1, &c, 1);
		c--;
		i--;
	}
}
