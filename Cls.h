#pragma once
#include <iostream>
#include <string>
class Cls
{
	int vectInt;
	char vectChar;
public:
	void setVectInt(int vect)
	{
		vectInt = vect;
	}
	int getVectInt() { return vectInt; }

	void setVectChar(char vect)
	{
		vectChar = vect;
	} 
	char getVectChar() { return vectChar; }

};

