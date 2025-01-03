CC = gcc
CFLAGS = -Wall -g
OBJ = main.o sll.o
EXEC = linked_list

# Regra principal para criar o executável
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Regra para compilar main.c
main.o: main.c sll.h
	$(CC) $(CFLAGS) -c main.c

slll.o: sll.c sll.h
	$(CC) $(CFLAGS) -c sll.c

# Limpa os arquivos gerados
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: clean
