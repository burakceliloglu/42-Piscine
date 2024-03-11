SOURCE = srcs/
CC = gcc
CFLAGS = -Wall -Werror -Wextra 
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = ${addprefix ${SOURCE}, $(SRCS:.c=.o)}
HEADER = includes

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: libft.a

libft.a: $(OBJS)
	ar -rc $@ $(OBJS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re