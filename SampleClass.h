#pragma once
class SampleClass
{
public:
	// ���상���o�֐�
	void Func1();
	void Func2();

private:
	// �����o�֐��|�C���^�̃e�[�u��
	static void(SampleClass::*pFuncTable[])();
	
};
