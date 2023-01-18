#pragma once
class Enemy
{
	enum phaseSet
	{
		combat, // 近接
		shoot,  // 射撃
		escape, // 離脱
	};

private:
	static bool staticDeleteFlag;
	// フェーズ
	phaseSet phase;

private:
	// 死亡フラグ
	bool deleteFlag = false;

public:
	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	// 死亡フラグ
	/// <summary>
	/// フラグ管理
	/// </summary>
	void Defeat();

	/// <summary>
	/// getter
	/// </summary>
	bool GetDeleteFlag();
	
	/// <summary>
	/// 近接
	/// </summary>
	void Combat();

	/// <summary>
	/// 射撃
	/// </summary>
	void Shoot();

	/// <summary>
	/// 離脱
	/// </summary>
	void Escape();

	// メンバ関数ポインタのテーブル
	static void(Enemy::* actionTable[])();

};
