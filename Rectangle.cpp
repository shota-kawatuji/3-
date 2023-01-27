#include "Rectangle.h"
#include <stdio.h>

void Rectangle::size() {
	// ‹éŒ`‚Ì–ÊÏ‚ÌŒvZ
	// ’ê•Ó ~ ‚‚³
	answer = x * y;
}

void Rectangle::draw() {
	printf("–ÊÏ:%d\n", answer);
}
