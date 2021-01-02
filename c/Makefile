PROGS = driver
OBJS = sort.o 

CC = gcc
CFLAGS = -g -Wall

%.o : %.c
		gcc ${CFLAGS} -c -o $@ $<

all : ${PROGS}

driver : sort.h logger.h driver.c sort.o
		$(CC) $(CFLAGS) -o $@ driver.c sort.o

clean : 	
		rm -rf ${PROGS} ${OBJS} *.o *~ *.dSYM
