SRCS = ft_printf.c ft_libft.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CC = gcc -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rfd

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
