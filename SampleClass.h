#pragma once
class SampleClass
{
private:
	int num;

public:
	// �R���X�g���N�^�@�����.h���Œ�`
	SampleClass(int x = 0) { num = x; }

	// �R�s�[�R���X�g���N�^�@�����.h���Œ�`
	SampleClass(const SampleClass& obj) {
		num = obj.num;
	}

	// ������Z�q�̃I�[�o�[���[�h�@�����.h�Œ�`(�{����.cpp��)
	SampleClass& operator=(const SampleClass& obj) {
		num = obj.num;
		return *this;
	}
};
