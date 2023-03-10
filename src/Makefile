EXE = graph500
OBJS = main.o core.o xorshift.o
CC = mpicc
DEBUG = -g
WARN = #-Wall -Wextra
CFLAGS = -I. -O3 $(DEBUG) $(WARN)
LIBS = 
.PHONY: clean run

%.o: %.c %.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(EXE) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

run: $(EXE)
	mpirun -np 1 ./$(EXE)

clean:
	rm -f $(EXE) $(OBJS)
