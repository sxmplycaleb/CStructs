CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = main.c function.c
OBJ = $(SRC:.c=.o)
EXEC = eplclubs

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

main.o: main.c function.h
	$(CC) $(CFLAGS) -c main.c

function.o: function.c function.h
	$(CC) $(CFLAGS) -c function.c

clean:
	rm -f $(OBJ) $(EXEC)

