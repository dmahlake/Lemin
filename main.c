/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 11:00:46 by dmahlake          #+#    #+#             */
/*   Updated: 2018/07/03 11:00:52 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static	t_var	initialisation(void)
{
	t_var v;

	v.rooms = NULL;
	v.path = NULL;
	v.start = NULL;
	v.end = NULL;
	v.line = NULL;
	v.n_ants = 0;
	v.start_end = 0;
	v.error = 0;
	return (v);
}

static	t_var	line_manipulation(t_var v)
{
	v.ptr = ft_strsplit(v.line, ' ');
	v.ptr2 = ft_strsplit(v.line, '-');
	(v.ptr) ? start_end(&v.start, &v.end, v.ptr[0],
			&v.start_end) : 0;
	(strcmp(v.line, "##start") == 0) ? (v.start_end = 1) : 0;
	(strcmp(v.line, "##end") == 0) ? (v.start_end = 2) : 0;
	if (v.ptr[0] && v.ptr[1] && v.ptr[2] && !v.ptr[3])
	{
		coordinates(v.ptr[1], v.ptr[2], &v.error);
		(v.ptr[0][0] == 'L') ? (v.error = 1) : 0;
		(v.ptr[0][0] == '#') ? 0 : add_room(&v.rooms, v.ptr[0]);
	}
	return (v);
}

int				main(void)
{
	t_var v;

	v = initialisation();
	while (get_next_line(0, &v.line))
	{
		ft_putendl(v.line);
		v.line = ft_strtrim(v.line);
		new_line(v.line, &v.error);
		if (v.n_ants == 0)
		{
			coordinates(v.line, NULL, &v.error);
			v.n_ants = ft_atoi(v.line);
		}
		v = line_manipulation(v);
		if (v.ptr2[0] && v.ptr2[1] && !v.ptr2[2])
			connect(v.rooms, v.ptr2[0], v.ptr2[1], &v.error);
	}
	ft_putchar('\n');
	get_ants(v);
	return (0);
}
