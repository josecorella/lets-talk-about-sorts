PROGS = driver
OBJS = sort.o

CC = g++
CFLAGS = -g -Wall

%.o : %.cpp
		$(CC) $(CFLAGS) -c -o $@ $<

all : ${PROGS}

driver : sort.h logger.h driver.cpp sort.o
		$(CC) $(CFLAGS) -o $@ driver.cpp sort.o
clean : 
		rm -rf ${PROGS} ${OBJS} *.o *~ *.dSYM

