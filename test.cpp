#include "test.h"
#include <stdio.h>

TestSingleton::TestSingleton() {}

TestSingleton::~TestSingleton() {}

TestSingleton* TestSingleton::GetInstance()
{
	// ŠÖ”“àstatic•Ï”‚Æ‚µ‚ÄéŒ¾‚·‚é
	static TestSingleton instance;

	return &instance;
}

void TestSingleton::memberFunc()
{
	printf("ƒeƒXƒg\n");
}
