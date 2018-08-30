#include "Key.h"
#include "DxLib.h"

Key* Key::instance = nullptr;

//コンストラクタ
Key::Key()
{
	memset(&key[0], 0, sizeof(key));
	memset(&old[0], 0, sizeof(old));
}

//デストラクタ
Key::~Key()
{
}

// 処理
void Key::UpData(void)
{
	memcpy(&old[0], &key[0], sizeof(old));

	GetHitKeyStateAll(key);
	GetJoypadInputState(DX_INPUT_KEY);
}

// キー入力
bool Key::CheckKey(int key)
{
	if (this->key[key])
	{
		return true;
	}

	return false;
}

// トリガーキー
bool Key::CheckTrigger(int key)
{
	if ((this->key[key] & old[key]) ^ this->key[key])
	{
		return true;
	}

	return false;
}
