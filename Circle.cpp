#include "Circle.h"
#include <stdio.h>

void Circle::size() {
	// �~�̖ʐς̌v�Z
	// ���a �~ ���a �~ �R.�P�S
	area = (float)r * (float)r * PI;
}

void Circle::draw() {
	printf("�ʐ�:%f\n", area);
}
