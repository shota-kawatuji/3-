#include "human.h"
#include <stdio.h>

Human::Human(const char* name) {}

Human::~Human() {}

Human::Human(const Human& obj)
{
	printf("%s���R�s�[", obj.name);

	// ���O�R�s�[
	name = obj.name;
}
