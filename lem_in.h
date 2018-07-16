/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 11:35:30 by dmahlake          #+#    #+#             */
/*   Updated: 2018/07/03 11:35:36 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include "libft/libft.h"

typedef	struct		s_room
{
	char			*name;
	int				visited;
	struct s_room	*child;
	struct s_room	*parent;
	struct s_room	*next;
}					t_room;

typedef	struct		s_queue
{
	char			*name;
	struct s_queue	*next;
}					t_queue;

typedef	struct		s_path
{
	char			*name;
	struct s_path	*next;
}					t_path;

typedef	struct		s_var
{
	t_room			*rooms;
	t_path			*path;
	t_room			*child;
	char			*start;
	char			*end;
	char			*line;
	int				n_ants;
	int				start_end;
	char			**ptr;
	char			**ptr2;
	int				error;
	char			*tmp;
}					t_var;

void				add_path(t_path **head, char *room);
void				add_room(t_room **head, char *room);
void				enqueue(t_queue **head, char *room);
char				*dequeue(t_queue **head);
t_room				*get_room(t_room *rooms, char *name);
void				connect(t_room *rooms, char *r1, char *r2, int *error);
void				print_path(t_room *root, t_path **path);
void				move_ants(t_path *path, t_var v);
int					ants_move(t_path *path, int ant, t_var v, int iter);
int					start_end(char **start, char **end, char *line,
		int *start_end);
void				new_line(char *line, int *error);
void				coordinates(char *x, char *y, int *error);
t_path				*move(t_queue *queue, t_room *current, char *end,
		t_room *rooms);
void				get_ants(t_var v);
int					ft_file_errors(size_t err_no);

#endif
