#ifndef IMAGE_H
#define IMAGE_H

#include "Color.h"
#include <iostream>

class Image
{
private:
	int _widht,_height;
	int _resolution;
	std::string _name;
	Color *_pixels; // Couleur membre
public:
	Image(std::string name, int widht, int height);
	Image(std::string fileName);
	std::string getName() const;
	int getWidht() const;
	int getHeight() const;
	Color getPixels(int buffer) const; // Fonction de la récupération de pixel suivant le buffer
	void setName();
	void setWidht(int widht);
	void setHeight(int height);

};
#endif