driver: driver.o
	g++ -o driver driver.o

clean:
	rm *.o driver