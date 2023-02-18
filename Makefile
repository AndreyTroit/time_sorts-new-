all: main.o sorts.o arraywork.o statarray.o testsorts.o
	g++ main.o sorts.o arraywork.o statarray.o testsorts.o

main.o: main.cpp
	g++ -c main.cpp

sorts.o: sorts.cpp
	g++ -c sorts.cpp

arraywork.o: arraywork.cpp
	g++ -c arraywork.cpp

statarray.o: statarray.cpp
	g++ -c statarray.cpp

testsorts.o: testsorts.cpp
	g++ -c testsorts.cpp

clean:
	rm -rf *.o test
