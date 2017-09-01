main:	main.o Numero.o Binario.o Hexadecimal.o Octal.o
	g++ main.o Numero.o Binario.o Hexadecimal.o Octal.o -o mn

main.o: main.cpp Numero.h Binario.h Hexadecimal.h Octal.h
	g++ -c main.cpp

Numero.o:	Numero.h Numero.cpp
	g++ -c Numero.h Numero.cpp

Binario.o:	Binario.h Binario.cpp
	g++ -c Binario.h Binario.cpp

Hexadecimal.o:	Hexadecimal.h Hexadecimal.cpp
	g++ -c Hexadecimal.h Hexadecimal.cpp

Octal.o:	Octal.h Octal.cpp
	g++ -c Octal.h Octal.cpp

clean:
	rm -f *.o main
