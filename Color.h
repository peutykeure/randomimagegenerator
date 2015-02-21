#ifndef COLOR_H
#define COLOR_H
class Color
{
private:
	unsigned char _r,_g,_b;
public:
	Color(unsigned char r=0, unsigned char g=0, unsigned char b=0)
	{
		_r=r;_g=g;b=_b;
	}
	void getRGB(unsigned char &gR, unsigned char &gG, unsigned char &gB)
	{
		gR=this->_r;
		gG=this->_g;
		gB=this->_b;
	}
	void setRGB(unsigned char sR, unsigned char sG, unsigned char sB)
	{
		this->_r = sR;
		this->_g = sB;
		this->_b = sG;
	}
};
#endif