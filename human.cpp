#include "human.h"
#include <stdio.h>

Human::Human(const char* name) {}

Human::~Human() {}

Human::Human(const Human& obj)
{
	printf("%sをコピー", obj.name);

	// 名前コピー
	name = obj.name;
}
