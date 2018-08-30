#pragma once
#include "DxLib.h"

class Key
{
public:
	~Key();

	// �C���X�^���X�ϐ��̎擾
	static Key* Get(void) 
	{
		return instance;
	}
	// �C���X�^���X
	static void Create(void) 
	{
		if (instance == nullptr)
		{
			instance = new Key();
		}
	}
	// �j��
	static void Destroy(void) 
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

	// ����
	void UpData(void);

	// �L�[����
	bool CheckKey(int key);

	// �g���K�[�L�[
	bool CheckTrigger(int key);

private:
	Key();

	// �C���X�^���X�ϐ�
	static Key* instance;

	char key[256];
	char old[256];
};
