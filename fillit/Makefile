NAME = fillit
CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJECTS = fillit.o ft_list_push_back.o ft_putchar.o ft_putstr.o ft_strlen.o list_to_left.o square.o writesq.o ft_worker.o

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

debug :
	$(CC) $(CFLAGS) -g $(OBJECTS:%.o=%.c) -o $(NAME)_deb

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

dclean :
	rm -f $(NAME)_deb
	rm -rf $(NAME)_deb.dSYM

dre : dclean debug

fillit.o : fillit.c
	$(CC) $(CFLAGS) -c fillit.c -o fillit.o

ft_list_push_back.o : ft_list_push_back.c
	$(CC) $(CFLAGS) -c ft_list_push_back.c -o ft_list_push_back.o

ft_putchar.o : ft_putchar.c
	$(CC) $(CFLAGS) -c ft_putchar.c -o ft_putchar.o

ft_putstr.o : ft_putstr.c
	$(CC) $(CFLAGS) -c ft_putstr.c -o ft_putstr.o

ft_strlen.o : ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c -o ft_strlen.o

list_to_left.o : list_to_left.c
	$(CC) $(CFLAGS) -c list_to_left.c -o list_to_left.o

square.o : square.c
	$(CC) $(CFLAGS) -c square.c -o square.o

writesq.o : writesq.c
	$(CC) $(CFLAGS) -c writesq.c -o writesq.o
ft_worker.o : ft_worker.c
	$(CC) $(CFLAGS) -c ft_worker.c -o ft_worker.o
