CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

SRC = ft_printf.c \
	ft_aff.c \
	ft_convert_base.c \
	ft_convert_base_long.c \
	ft_case.c

OBJS = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft all 
	cp libft/libft.a .
	mv libft.a $(NAME) 
	ar rcs $(NAME) $(OBJS)

bonus : all

clean :
	rm -f $(OBJS)
	make -C libft clean

fclean : clean
	rm -f $(NAME)
	make -C libft fclean

re : fclean all

.PHONY : all clean fclean re
