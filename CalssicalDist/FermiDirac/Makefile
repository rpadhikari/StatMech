CC=gcc -c
LD=gcc
SRC=fx.c main.c
OBJ=fx.o main.o
fd:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o fd.x -lm
	rm -rf *.o
clean:
	rm -rf *.o *.x
plot:
	gnuplot plot.gp

