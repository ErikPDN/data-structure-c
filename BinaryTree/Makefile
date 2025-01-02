CC = gcc
CFLAGS = -Wall -g
OBJ = main.o tree.o
EXEC = binary_tree

# Regra principal para criar o executável
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Regra para compilar main.c
main.o: main.c tree.h
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar tree.c
tree.o: tree.c tree.h
	$(CC) $(CFLAGS) -c tree.c

# Limpa os arquivos gerados
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: clean
