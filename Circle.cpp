#include "Circle.h"
#include <stdio.h>

void Circle::size() {
	// ‰~‚Ì–ÊÏ‚ÌŒvZ
	// ”¼Œa ~ ”¼Œa ~ ‚R.‚P‚S
	area = (float)r * (float)r * PI;
}

void Circle::draw() {
	printf("–ÊÏ:%f\n", area);
}
