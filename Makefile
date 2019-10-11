SURC = *.cpp *.h
EXEC = run
CC = g++
FLAG = -std=c++11 -g
all : $(SURC)
		$(CC) $(FLAG) -o $(EXEC) $^

clean :
	rm -rf  $(EXEC)
	rm -rf *.o
	rm -rf *.gch
	rm -rf log.txt
