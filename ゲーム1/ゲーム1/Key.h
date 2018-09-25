#include "DxLib.h"

class Key
{
public:
	~Key();

	// インスタンス変数の取得
	static Key* Get(void) 
	{
		return instance;
	}
	// インスタンス
	static void Create(void) 
	{
		if (instance == nullptr)
		{
			instance = new Key();
		}
	}
	// 破棄
	static void Destroy(void) 
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

	// 処理
	void UpData(void);

	// キー入力
	bool CheckKey(int key);

	// トリガーキー
	bool CheckTrigger(int key);


private:
	Key();

	// インスタンス変数
	static Key* instance;

	char key[256];
	char old[256];
};
