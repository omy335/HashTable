Hashtable: main.o HashEntry.o HashMap.o util.o
	g++ -o Hashtable main.o HashEntry.o HashMap.o util.o

main.o: main.cpp
	g++ -c main.cpp

HashEntry.o: HashEntry.cpp
	g++ -c HashEntry.cpp

HashMap.o: HashMap.cpp
	g++ -c HashMap.cpp

util.o:	util.cpp
	g++ -c util.cpp

clean:
	rm *.o

cleanAll:
	rm *.o Hashtable  