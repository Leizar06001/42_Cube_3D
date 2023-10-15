/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_steps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:36:18 by raphaellous       #+#    #+#             */
/*   Updated: 2023/09/28 21:46:51 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

void	manage_game_steps(t_data *dt)
{
	if (dt->game_step == 1)
	{
		ft_cat_speak(dt);
		if (dt->sc.transition_state == 1)
			transition_update(dt, &dt->sc);
	}
}
