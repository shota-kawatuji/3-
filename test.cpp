#include "test.h"
#include <stdio.h>

TestSingleton::TestSingleton() {}

TestSingleton::~TestSingleton() {}

TestSingleton* TestSingleton::GetInstance()
{
	// �֐���static�ϐ��Ƃ��Đ錾����
	static TestSingleton instance;

	return &instance;
}

void TestSingleton::memberFunc()
{
	printf("�e�X�g\n");
}
