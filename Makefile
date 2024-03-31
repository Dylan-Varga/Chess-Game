CC=g++ --std=gnu99 -g

chess: driver.cpp chessGame.o
	$(CC) driver.c chessGame.o -o chess

chessGame.o: chessGame.c chessGame.h
	$(CC) -c chessGame.c

clean:
	rm -f *.o chess