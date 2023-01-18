#pragma once
class SampleClass
{
public:
	// 自作メンバ関数
	void Func1();
	void Func2();

private:
	// メンバ関数ポインタのテーブル
	static void(SampleClass::*pFuncTable[])();
	
};
