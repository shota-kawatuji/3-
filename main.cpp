#include <vector>
#include <stdio.h>
#include "Enemy.h"

using namespace std;

int main() {
#pragma region 3-1-1
	//// �C���X�^���X���擾����
	//TestSingleton* testSingleton = TestSingleton::GetInstance();
	//// �g�p
	//testSingleton->memberFunc();
#pragma endregion

#pragma region 3-1-2
	//Human* human1 = new Human("�h��������\n");
	//Human* human2 = new Human(*human1);

	//Human human1 = Human("�h��������\n");
	//Human human2 = human1;
#pragma endregion

#pragma region 3-1-3
	//Human human1 = Human("�h��������\n");
	//Human human2 = Human("�̂ё�\n");
	//Human human3 = human1;

	//human2 = human1;
	//// human2�̓h��������

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

#pragma region 3-2�m�F�ۑ�
	vector<Enemy> enemies =
	{ Enemy(),Enemy(),Enemy(),Enemy(),Enemy() };

	while (true)
	{
		for (int i = 0; i < enemies.size(); i++)
		{
			enemies[i].Update();
		}

		printf("�G�ꗗ\n{\n");
		for (int i = 0; i < enemies.size(); i++)
		{
			if (!enemies[i].GetDeleteFlag())
			{
				printf(" �G%d\n", i);
			}
		}
		printf("}\n\n");

		printf("�|�������G�̔ԍ�����͂��Ă�������\n");

		int target = 0;
		scanf_s("%d", &target);

		if (target >= 0 && target < enemies.size())
		{
			enemies[target].Defeat();
			printf("\n�G%d��|���܂���\n\n", target);
		}
		else
		{
			printf("\n�G%d��������܂���ł���\n\n", target);
		}
	}
#pragma endregion

	return 0;
}
