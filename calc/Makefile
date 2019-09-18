FLAGS = -Wall -Werror -g
CC = gcc $(FLAGS)

OBJ = main.o\
      stack.o

main: $(OBJ)
	$(CC) -o main main.o stack.o
%.o: %.c
	$(CC) -o $@ -c $^
