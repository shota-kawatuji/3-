#include <iostream>
#include "student.h"
using namespace std;

int Student::studentCount;

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
	Student* student1 = new Student;
	Student* student2 = new Student;
	Student* student3 = new Student;

	cout << Student::studentCount << endl;

	delete student1;

	cout << Student::studentCount << endl;
	delete student2;
	delete student3;
	cout << Student::studentCount << endl;

#pragma endregion

	return 0;
}
