NAME		= libftprintf.a
CC 			= cc
C_FLAGS		= -Wall -Wextra -Werror
SRCS		= ft_printf.c ft_putunbr.c ft_putprt.c ft_nlen_hex.c ft_revert_str.c ft_puthex_fd.c

OBJ_F		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_F)
	make -C ./libft
	cp ./libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ_F)

%.o : %.c 
	$(CC) -c $(C_FLAGS) $< -o $@

clean: 	
	rm -f $(OBJ_F)
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re