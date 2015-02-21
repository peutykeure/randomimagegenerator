#include "Image.h"
#include "Color.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
Image::Image(std::string name, int widht, int height)
/*:_name(name),_widht(widht) etc*/
{
	this->_name = name;
	this->_widht = widht;
	this->_height = height;
	this->_resolution = this->_widht*this->_height;
	// On crée un tableau avant la boucle
	this->_pixels = new Color[this->_resolution];
	srand (time(NULL)); /* Le srand est ici obligatoire pour avoir une fonction rand réelle
	car la fonction rand donne toujours les mêmes valeurs */
	for (int i = 0; i < this->_resolution; ++i)
	{
		this->_pixels[i].setRGB(rand() % 256,
			rand() % 256,
			rand() % 256);
	}
}

Image::Image(std::string fileName)
{
	// Fichier ppm (en cours d'implémentation)
}

std::string Image::getName() const
{
	return this->_name;
}

int Image::getWidht() const
{
	return this->_widht;
}

int Image::getHeight() const
{
	return this->_height;
}

Color Image::getPixels(int buffer)const
{
	return this->_pixels[buffer];
}

void Image::setName()
{
	std::cin >> this->_name;
}
void Image::setWidht(int widht)
{
	this->_widht = widht;
}

void Image::setHeight(int height)
{
	this->_height = height;
}