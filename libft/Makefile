CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

SRC = ft_isdigit.c \
	ft_putendl_fd.c \
	ft_strjoin.c \
	ft_strrchr.c \
	ft_atoi.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_putnbr_fd.c \
	ft_strlcat.c \
	ft_strtrim.c \
	ft_bzero.c \
	ft_itoa.c \
	ft_itoa_unsigned.c \
	ft_memcmp.c \
	ft_putstr_fd.c \
	ft_strlcpy.c \
	ft_substr.c \
	ft_calloc.c \
	ft_memcpy.c \
	ft_split.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_isalnum.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strmapi.c \
	ft_toupper.c \
	ft_isalpha.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_isascii.c \
	ft_putchar_fd.c \
	ft_striteri.c \
	ft_strnstr.c

SRC_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

LIB_PATH = ./

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	make bonus

bonus : $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

.PHONY : bonus all clean fclean re
