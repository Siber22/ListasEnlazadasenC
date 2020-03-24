#makefile

OBJS = main.o lista.o libro.o
BINARY = List
CFLAGS = -g -Wall

all: List

#Esta regla compila el programa principal
List: $(OBJS) #main.o lista.o libro.o
	gcc -o $(BINARY) $(OBJS)

main.o: main.c libro.h lista.h
#gcc -c main.c EL COMPILADOR YA SABE QUE COMPILAR
#CON LO CUAL SE PUEDE COMENTAR

lista.o: lista.c lista.h
#gcc -c lista.c

libro.o: libro.c
#gcc -c libro.c

clean:
	rm -f $(BINARY) $(OBJS)
