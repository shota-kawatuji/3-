#include <vector>
#include <string>
#include <iostream>
#include "Enemy.h"

using namespace std;

int main() {
#pragma region 3-1-1
	//// インスタンスを取得する
	//TestSingleton* testSingleton = TestSingleton::GetInstance();
	//// 使用
	//testSingleton->memberFunc();
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

#pragma region 3-2
	/*Student* student1 = new Student;
	Student* student2 = new Student;
	Student* student3 = new Student;

	cout << Student::studentCount << endl;

	delete student1;

	cout << Student::studentCount << endl;
	delete student2;
	delete student3;
	cout << Student::studentCount << endl;*/

#pragma endregion

#pragma region 3-2確認課題
	//vector<Enemy> enemies =
	//{ Enemy(),Enemy(),Enemy(),Enemy(),Enemy() };

	//while (true)
	//{
	//	for (int i = 0; i < enemies.size(); i++)
	//	{
	//		enemies[i].Update();
	//	}

	//	printf("敵一覧\n{\n");
	//	for (int i = 0; i < enemies.size(); i++)
	//	{
	//		if (!enemies[i].GetDeleteFlag())
	//		{
	//			printf(" 敵%d\n", i);
	//		}
	//	}
	//	printf("}\n\n");

	//	printf("倒したい敵の番号を入力してください\n");

	//	int target = 0;
	//	scanf_s("%d", &target);

	//	if (target >= 0 && target < enemies.size())
	//	{
	//		enemies[target].Defeat();
	//		printf("\n敵%dを倒しました\n\n", target);
	//	}
	//	else
	//	{
	//		printf("\n敵%dが見つかりませんでした\n\n", target);
	//	}
	//}
#pragma endregion

#pragma region 3-3
	//vector<Enemy> enemies = { Enemy() };

	//while (true) {
	//	for (int i = 0; i < enemies.size(); i++) {
	//		if (!enemies[i].GetDeleteFlag()) {
	//			enemies[i].Update();
	//		}
	//	}

	//	printf("“敵一覧\n{\n");
	//	for (int i = 0; i < enemies.size(); i++) {
	//		if (!enemies[i].GetDeleteFlag()) {
	//			printf(" “敵%d\n", i);
	//		}
	//	}
	//	printf("}\n\n");

	//	string getSelect;
	//	printf("[ENTER] : 次のフェーズ\n");
	//	cin.clear();
	//	getline(cin, getSelect);
	//}
#pragma endregion

#pragma region 3-6
	
#pragma endregion

	return 0;
}