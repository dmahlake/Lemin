/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 11:00:34 by dmahlake          #+#    #+#             */
/*   Updated: 2018/07/03 11:00:38 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_room	*get_room(t_room *rooms, char *name)
{
	while (rooms)
	{
		if (strcmp(name, rooms->name) == 0)
			return (rooms);
		rooms = rooms->next;
	}
	return (NULL);
}

void	connect(t_room *rooms, char *r1, char *r2, int *error)
{
	t_room *room1;
	t_room *room2;

	room1 = get_room(rooms, r1);
	room2 = get_room(rooms, r2);
	if (room1 && room2)
	{
		add_room(&room1->child, r2);
		add_room(&room2->child, r1);
	}
	else
		*error = 1;
}

void	print_path(t_room *root, t_path **path)
{
	if (root == NULL)
		return ;
	print_path(root->parent, path);
	add_path(path, root->name);
}
