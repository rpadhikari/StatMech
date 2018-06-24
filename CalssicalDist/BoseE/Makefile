CC=gcc -c
LD=gcc
SRC=fx.c main.c
OBJ=fx.o main.o
be:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o be.x -lm
	rm -rf *.o
clean:
	rm -rf *.o *.x
plot:
	gnuplot plot.gp

