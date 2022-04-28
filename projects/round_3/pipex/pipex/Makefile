# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnameles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 20:30:27 by gnameles          #+#    #+#              #
#    Updated: 2021/12/29 17:16:21 by gnameles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= pipex
LIB		= ./libft/libft.a

SRCS 	= src/pipex.c src/utils.c
OBJS 	= ${SRCS:.c=.o}

SRCS_BONUS	= src/pipex_bonus.c src/utils.c src/utils_bonus.c
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

HEADER	= -I./inc/

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

%.o : %.c
					gcc ${CFLAGS} ${HEADER} -c $< -o $(<:.c=.o)

$(NAME):	${OBJS}
					make re -C ./libft
					$(CC) ${OBJS} ${LIB} -o ${NAME}

all: 		${NAME}

bonus:		${OBJS_BONUS}
					make re -C ./libft
					$(CC) ${OBJS_BONUS} ${LIB} -o ${NAME}

clean:
					make clean -C ./libft
					rm -f ${OBJS} ${OBJS_BONUS}

fclean: 	clean
					make fclean -C ./libft
					rm -f $(NAME)
					rm -f ${LIB}

re:			fclean all

.PHONY: all clean fclean re bonus