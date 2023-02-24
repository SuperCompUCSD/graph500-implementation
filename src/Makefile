# AOC 2022 template makefile
EXE =  
OBJS = 
CC = gcc
DEBUG = -g
WARN = -Wall -Wextra
CFLAGS = -I. $(DEBUG) $(WARN)
LIBS = 
.PHONY: clean run

%.o: %.c %.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(EXE) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

run: $(EXE)
	./$(EXE)

clean:
	rm -f $(EXE) $(OBJS)
