CC=gcc
FILE=
FLAGS= -g -std=c2a

all: exe.o
	${CC} exe.o -o exe

exe.o: ${FILE}
	${CC} -c ${FILE} -o exe.o

clean:
	@touch exe a.o
	rm *.o exe 
