#pragma once
class Enemy
{
	enum phaseSet
	{
		combat, // �ߐ�
		shoot,  // �ˌ�
		escape, // ���E
	};

private:
	static bool staticDeleteFlag;
	// �t�F�[�Y
	phaseSet phase;

private:
	// ���S�t���O
	bool deleteFlag = false;

public:
	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	// ���S�t���O
	/// <summary>
	/// �t���O�Ǘ�
	/// </summary>
	void Defeat();

	/// <summary>
	/// getter
	/// </summary>
	bool GetDeleteFlag();
	
	/// <summary>
	/// �ߐ�
	/// </summary>
	void Combat();

	/// <summary>
	/// �ˌ�
	/// </summary>
	void Shoot();

	/// <summary>
	/// ���E
	/// </summary>
	void Escape();

	// �����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* actionTable[])();

};
