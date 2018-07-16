# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 15:11:20 by dmahlake          #+#    #+#              #
#    Updated: 2018/07/03 10:58:57 by dmahlake         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_process.c\
	  ft_check_room.c\
	  ft_lemin.c\
	  ft_maping.c\
	  ft_moving_ant.c\
	  main.c\
	  
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRC)
		@make -C libft 
		@gcc $(FLAG) $(OBJ) libft/libft.a -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
