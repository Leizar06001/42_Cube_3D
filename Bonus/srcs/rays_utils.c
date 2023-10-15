/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:28:10 by raphaellous       #+#    #+#             */
/*   Updated: 2023/09/28 19:04:57 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

int	floor_shade(t_data *dt, int y)
{
	int	shade;

	if (dt->rays.night == 0)
		return (100);
	shade = (y - (dt->win_h / 2 + 20)) / 4;
	if (shade < 0)
		shade = 0;
	if (shade > 100)
		shade = 100;
	return (shade);
}

float	deg_to_rad(float deg)
{
	return (deg * PI / 180);
}

float	rad_to_deg(float rad)
{
	return (rad * 180 / PI);
}

float	fixang(float a)
{
	if (a > 359)
		a -= 360;
	if (a < 0)
		a += 360;
	return (a);
}

float	dist(float ax, float ay, float bx, float by)
{
	return (sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay)));
}
