#include "Enemy.h"
#include <stdio.h>

bool Enemy::staticDeleteFlag = false;

void Enemy::Update()
{
	if (staticDeleteFlag)
	{
		deleteFlag = true;
	}
	(this->*actionTable[static_cast<size_t>(phase)])();
	phase = static_cast<phaseSet>(phase + 1);
}

void Enemy::Defeat()
{
	deleteFlag = true;
	staticDeleteFlag = true;
}

bool Enemy::GetDeleteFlag()
{
	return deleteFlag;
}

// �t�F�[�Y�̊֐��e�[�u��
void(Enemy::* Enemy::actionTable[])() = {
	&Enemy::Combat, // �ߐ�
	&Enemy::Shoot,  // �ˌ�
	&Enemy::Escape  // ���E
};

void Enemy::Combat() {
	printf("�G�̋ߐڍU���I\n�޼��!\n");
}

void Enemy::Shoot() {
	printf("�G�̎ˌ����I\n�_�_�_�_�_�E�E�E\n");
}

void Enemy::Escape() {
	printf("�G�����������I\n�^�b�^�b�^�b�E�E�E\n");
	deleteFlag = true;
}
