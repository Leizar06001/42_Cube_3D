/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:07:40 by raphaellous       #+#    #+#             */
/*   Updated: 2023/09/27 12:31:13 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

char	*ft_get_text_path(char *str)
{
	int		i;
	char	*ret;
	int		len;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	while (str[i] && i < 2)
		i++;
	while (str[i] && str[i] <= 32)
		i++;
	ret = malloc(sizeof(char) * (len + 1));
	while (i < len - 1)
	{
		ret[j] = str[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
