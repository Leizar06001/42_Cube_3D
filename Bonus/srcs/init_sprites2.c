/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sprites2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:03:49 by raphaellous       #+#    #+#             */
/*   Updated: 2023/10/01 14:09:40 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

void	set_sprites_params2(t_sprites *sp, int i)
{
	if (sp->type[i] == 4)
	{
		sp->w[i] = 512.0;
		sp->h[i] = 512.0;
		sp->sscale[i] = 20;
	}
	else if (sp->type[i] == 5)
	{
		sp->w[i] = 180.0;
		sp->h[i] = 180.0;
		sp->sscale[i] = 30;
	}
	else if (sp->type[i] == 6 || sp->type[i] == 7)
	{
		sp->w[i] = 180.0;
		sp->h[i] = 180.0;
		sp->sscale[i] = 20;
	}
	else if (sp->type[i] == 9)
	{
		sp->w[i] = 600.0;
		sp->h[i] = 600.0;
		sp->sscale[i] = 30;
	}
}

void	set_sprites_params(t_sprites *sp, int i)
{
	while (++i < 30)
	{
		if (sp->type[i] == 1)
		{
			sp->w[i] = 64.0;
			sp->h[i] = 64.0;
			sp->sscale[i] = 100;
		}
		else if (sp->type[i] == 2)
		{
			sp->w[i] = 150.0;
			sp->h[i] = 150.0;
			sp->sscale[i] = 80;
		}
		else if (sp->type[i] == 3)
		{
			sp->w[i] = 150.0;
			sp->h[i] = 150.0;
			sp->sscale[i] = 150;
		}
		else
			set_sprites_params2(sp, i);
	}
}
