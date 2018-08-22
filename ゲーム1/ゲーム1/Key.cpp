#include "Key.h"
#include "DxLib.h"

Key* Key::instance = nullptr;

//�R���X�g���N�^
Key::Key()
{
	memset(&key[0], 0, sizeof(key));
	memset(&old[0], 0, sizeof(old));
}

//�f�X�g���N�^
Key::~Key()
{
}

// ����
void Key::UpData(void)
{
	memcpy(&old[0], &key[0], sizeof(old));

	GetHitKeyStateAll(key);
}

// �L�[����
bool Key::CheckKey(int key)
{
	if (this->key[key])
	{
		return true;
	}

	return false;
}

// �g���K�[�L�[
bool Key::CheckTrigger(int key)
{
	if ((this->key[key] & old[key]) ^ this->key[key])
	{
		return true;
	}

	return false;
}
