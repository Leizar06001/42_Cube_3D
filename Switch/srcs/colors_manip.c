/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_manip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloussig <rloussig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:31:55 by raphaellous       #+#    #+#             */
/*   Updated: 2023/09/29 14:36:45 by rloussig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

int	ft_add_shade(int col, int shade)
{
	if (shade > 100)
		shade = 100;
	if (shade <= 0)
		return (0);
	return (trgb(get_t(col), get_r(col) * shade / 100,
			get_g(col) * shade / 100, get_b(col) * shade / 100));
}
