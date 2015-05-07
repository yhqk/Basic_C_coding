CC= gcc
CFLAG= -Wall -I
EXE_NAME= ENV
FILES= main.o operation.o

all:$(FILES)
	$(CC) -o $(EXE_NAME) $(FILES) $(CFLAGS)

clean: 
	rm -f *.o

run:
	./$(EXE_NAME)
