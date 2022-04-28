NAME = libftprintf.a

LIBFT = 	../libft/libft.a

SRCS =		ft_printf.c				\
				ft_f_props_cycle.c	\
				ft_check_all_flags.c			\
				ft_formatting.c			\
				ft_check_errors.c		\
				ft_get_string.c			\
				ft_get_char.c			\
				ft_get_address.c		\
				ft_get_percent.c		\
				ft_get_i_d.c			\
				ft_get_u_x.c			\
				ft_formatting_flags_1.c	\
				ft_formatting_flags_2.c	\
				ft_flags_pointer.c		

BONUS =		ft_printf_bonus.c				\
				ft_f_props_cycle_bonus.c	\
				ft_check_all_flags_bonus.c			\
				ft_formatting_bonus.c			\
				ft_check_errors_bonus.c		\
				ft_get_string_bonus.c			\
				ft_get_char_bonus.c			\
				ft_get_address_bonus.c		\
				ft_get_percent_bonus.c		\
				ft_get_i_d_bonus.c			\
				ft_get_u_x_bonus.c			\
				ft_formatting_flags_1_bonus.c	\
				ft_formatting_flags_2_bonus.c	\
				ft_flags_pointer_bonus.c

OBJS 			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

CC =		gcc
RM =		rm -rf
CFLAGS = 	-Wall -Wextra -Werror -I.

$(NAME): $(OBJS) $(LIBFT) 
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C ./libft all

%.o: %.c
	$(CC) $(CFLAGS) $< -c

all:	$(NAME)

clean: 
	$(RM) $(OBJS) $(BONUS_OBJS)
	make -C ./libft fclean

fclean: clean 
	$(RM) $(NAME)

re: fclean all

bonus: $(BONUS_OBJS) $(LIBFT)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus