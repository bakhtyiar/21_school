# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phemsi-a <phemsi-a@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 21:18:02 by phemsi-a          #+#    #+#              #
#    Updated: 2021/03/16 08:56:32 by phemsi-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a

SRC = ./source/
PRINT = ./source/parsing_identifiers/print_
LIBFT_PATH = ./libraries/libft/

FILES = $(SRC)ft_printf.c $(SRC)flags_parser.c $(PRINT)char.c $(PRINT)string.c $(PRINT)integer.c $(PRINT)hex.c
OBJECTS = ft_printf.o flags_parser.o print_char.o print_string.o print_integer.o print_hex.o

CC = clang
CFLAGS = -Wall -Wextra -Werror
RE = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_PATH)
	@make -C $(LIBFT_PATH) $(LIBFT)
	@cp $(LIBFT_PATH)$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@ar -rcs $(NAME) $(OBJECTS)
	@echo done!
		
$(OBJECTS): $(FILES)
	@$(CC) $(FLAGS) -c $(FILES)
	@echo done!
	
flags:
	@echo understanding printf flags
	@$(CC) $(CFLAGS) ./tests/understanding_printf_flags.c && ./a.out

clean:
	$(RM) $(OBJECTS)

fclean: clean
	@echo cleaning!
	$(RM) $(NAME)
	@echo done!
	
re: fclean all 

.PHONY: all clean fclean re 
