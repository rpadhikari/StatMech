CC=gcc -c
LD=gcc
SRC=F_D.c main.c
OBJ=F_D.o main.o
fd:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o fd.x -lm
	rm -rf *.o
clean:
	rm -rf *.o *.x

