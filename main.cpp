#include <iostream>
#include <fstream>
#include "Color.h"
#include "Image.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (int argc, char *argv[])
{
	cout << "Welcome to PPM Generator" << endl;

	if(argc > 1) /* Si on un argument avec la console
	on ouvre un fichier PPM (implémentation en cours)*/
	{

	}
	else // Sinon on spécifie une erreur
	{
		Color aPixel;
		int k; // Buffer du tableau de pixel du futur objet instancié de la classe Image (random)
        unsigned char r, g, b; // Vars. pour changer la couleur de l'objet instancié de sf::RectangleShape (aRectangle)
		int widht, height;
		string name;
		/*cout << "Génération d'une image aléatoire" << endl;
		cout << "Largeur de l'image" << endl;
		cin >> widht;
		cout << "Hauteur de l'image" << endl;
		cin >> height;*/
		Image random("name", 500, 500);
		sf::RenderWindow window(sf::VideoMode(500, 500), "Random Image Generator");
		sf::RectangleShape *aRectangle = new sf::RectangleShape[random.getHeight()*random.getWidht()];
		for (int y = 0; y < random.getHeight(); ++y)
		{
			for (int x = 0; x < random.getWidht(); ++x)
			{
				k = random.getWidht()*y + x;
				/* Ici on est obligé de multiplier k avec y * largeur de l'image car à la fin de la boucle 
				for, notre x est reset. il faut donc suivant y rajouter les autres x de la précendante boucle*/
        		aRectangle[k].setSize(sf::Vector2f(1, 1));
        		aPixel = random.getPixels(k);
        		aPixel.getRGB(r,g,b);
        		aRectangle[k].setFillColor(sf::Color(r, g, b));
        		aRectangle[k].setPosition(x, y);
        		window.draw(aRectangle[k]);
			}
		}
		// On éxecute une seule fois le calcul et l'affichage de notre image.
        window.display();
   	 	while (window.isOpen())
   		{
        	sf::Event event;
       	 	while (window.pollEvent(event))
        	{
        		if (event.type == sf::Event::Closed)
            	window.close();
        	}
  			
    	}
    	delete aRectangle;

	}
	return 0;
}