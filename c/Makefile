PROGS = driver

CC = gcc
CFLAGS = -g -Wall

all : ${PROGS}

driver : driver.o
		$(CC) $(CFLAGS) -o driver driver.o

clean : 	
		rm -rf ${PROGS} ${OBJS} *.o *~
