/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moahamad <moahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:36:50 by moahamad          #+#    #+#             */
/*   Updated: 2026/08/26 12:08:37 by moahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;
void	set_point(t_point *point);

#endif // FT_POINT_H
/*
#include "ft_point.h"
#include <stdio.h>
void set_point(t_point *point)
{
        point->x = 42;
        point->y = 21;
}
int main(void)
{
        t_point point;
        set_point(&point);
        printf("%i %i",point.x,point.y);
        return (0);
}*/
