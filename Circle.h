#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	void size() override;
	void draw() override;

private:
	int r = 10;
	float PI = 3.14;
	float area;
};
