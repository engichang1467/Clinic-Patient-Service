all: wi

wi: walkIn.o List.o Patient.o
	g++ -Wall -o wi walkIn.o List.o Patient.o

walkIn.o: walkIn.cpp List.h Patient.h
	g++ -Wall -c walkIn.cpp

List.o: List.cpp List.h
	g++ -Wall -c List.cpp

Patient.o: Patient.cpp Patient.h
	g++ -Wall -c Patient.cpp

clean:
	rm -f wi *.o
