#pragma once
class SampleClass
{
private:
	int num;

public:
	// コンストラクタ　今回は.h内で定義
	SampleClass(int x = 0) { num = x; }

	// コピーコンストラクタ　今回は.h内で定義
	SampleClass(const SampleClass& obj) {
		num = obj.num;
	}

	// 代入演算子のオーバーロード　今回は.hで定義(本来は.cppへ)
	SampleClass& operator=(const SampleClass& obj) {
		num = obj.num;
		return *this;
	}
};
