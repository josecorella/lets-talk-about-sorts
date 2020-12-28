PROGS = driver

CC = gcc
CFLAGS = -g -Wall

all : ${PROGS}

driver : main.o
		$(CC) $(CFLAGS) -o driver main.o

clean : 	
		rm -rf ${PROGS} ${OBJS} *.o *~
