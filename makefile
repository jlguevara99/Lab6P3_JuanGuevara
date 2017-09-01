main:	main.o Numero.o Binario.o Hexadecimal.o Octal.o
	g++ -std=c++11 main.o Numero.o Binario.o Hexadecimal.o Octal.o -o mn

main.o: main.cpp Numero.h Binario.h Hexadecimal.h Octal.h
	g++ -std=c++11 -c main.cpp

Numero.o:	Numero.h Numero.cpp
	g++ -std=c++11 -c Numero.h Numero.cpp

Binario.o:	Binario.h Binario.cpp
	g++ -std=c++11 -c Binario.h Binario.cpp

Hexadecimal.o:	Hexadecimal.h Hexadecimal.cpp
	g++ -std=c++11 -c Hexadecimal.h Hexadecimal.cpp

Octal.o:	Octal.h Octal.cpp
	g++ -std=c++11 -c Octal.h Octal.cpp

clean:
	rm -f *.o main
