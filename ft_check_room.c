/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_room.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 10:59:05 by dmahlake          #+#    #+#             */
/*   Updated: 2018/07/03 10:59:11 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		start_end(char **start, char **end, char *line, int *start_end)
{
	int	error;

	error = 0;
	if (*start_end == 1)
	{
		if (*start != NULL)
			error = 1;
		*start = line;
	}
	if (*start_end == 2)
	{
		if (*end != NULL)
			error = 1;
		*end = line;
	}
	*start_end = 0;
	return (error);
}

void	new_line(char *line, int *error)
{
	int len;

	len = ft_strlen(line);
	if (!len)
		*error = 1;
}

void	coordinates(char *x, char *y, int *error)
{
	if (x != NULL)
	{
		while (*x && *x != '#')
		{
			if (!ft_isdigit(*x))
				*error = 1;
			x++;
		}
	}
	if (y != NULL)
	{
		while (*y && *y != '#')
		{
			if (!ft_isdigit(*y))
				*error = 1;
			y++;
		}
	}
}
