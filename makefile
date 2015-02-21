all : main

main : main.o Image.o
	g++ Image.o main.o -I . -L./SFML/lib -lsfml-graphics -lsfml-window -lsfml-system -o main
main.o : main.cpp Image.h Color.h
	g++ -c main.cpp -I./SFML/include -o main.o
Image.o : Image.cpp Image.h Color.h
	g++ -c Image.cpp -I. -o Image.o