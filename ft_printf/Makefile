NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
       ft_hexconversion.c \
       ft_putchar.c \
       ft_putnbr.c \
       ft_putnbr_unsigned.c \
       ft_putstr.c \
       ft_print_adress.c \

OBJS = $(SRCS:.c=.o)

CC = cc

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
