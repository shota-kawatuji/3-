#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	void size();
	void draw();

private:
	int x = 5;
	int y = 2;
	int answer;
};
