#include "Rectangle.h"
#include <stdio.h>

void Rectangle::size() {
	// ��`�̖ʐς̌v�Z
	// ��� �~ ����
	answer = x * y;
}

void Rectangle::draw() {
	printf("�ʐ�:%d\n", answer);
}
