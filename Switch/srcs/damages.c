/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   damages.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:13:35 by raphaellous       #+#    #+#             */
/*   Updated: 2023/09/29 02:16:52 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

void	show_damages(t_data *dt)
{
	int	x;
	int	y;

	if (dt->player.damaged > 2 && dt->frame_nb % 2)
	{
		y = -1;
		while (++y < WIN_HEIGHT)
		{
			x = -1;
			while (++x < WIN_WIDTH)
				ft_put_pixel(&dt->img, x, y, 0x00550000);
		}
		dt->player.damaged--;
	}
}
