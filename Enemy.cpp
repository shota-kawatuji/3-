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

// フェーズの関数テーブル
void(Enemy::* Enemy::actionTable[])() = {
	&Enemy::Combat, // 近接
	&Enemy::Shoot,  // 射撃
	&Enemy::Escape  // 離脱
};

void Enemy::Combat() {
	printf("敵の近接攻撃！\nﾄﾞｼｭｯ!\n");
}

void Enemy::Shoot() {
	printf("敵の射撃中！\nダダダダダ・・・\n");
}

void Enemy::Escape() {
	printf("敵が逃走した！\nタッタッタッ・・・\n");
	deleteFlag = true;
}
