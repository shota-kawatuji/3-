#include "test.h"
#include "human.h"
#include "SampleClass.h"

int main() {
#pragma region 3-1-1
	// インスタンスを取得する
	TestSingleton* testSingleton = TestSingleton::GetInstance();
	// 使用
	testSingleton->memberFunc();
#pragma endregion

#pragma region 3-1-2
	//Human* human1 = new Human("ドラえもん\n");
	//Human* human2 = new Human(*human1);

	//Human human1 = Human("ドラえもん\n");
	//Human human2 = human1;
#pragma endregion

#pragma region 3-1-3
	//Human human1 = Human("ドラえもん\n");
	//Human human2 = Human("のび太\n");
	//Human human3 = human1;

	//human2 = human1;
	//// human2はドラえもん

	//SampleClass a(114);

	//SampleClass b = a;
#pragma endregion
	return 0;
}
