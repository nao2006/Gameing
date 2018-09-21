#pragma once

#define SCREEN_SIZE_X 640
#define SCREEN_SIZE_Y 480

enum DIR
{
	DOWN,
	LEFT,
	RIGHT,
	UP
};

//�Q�[�����[�h
typedef enum
{
	GAME_INIT,
	GAME_TITLE,
	GAME_MAIN,
	GAME_CLEAR,
	GAME_OVER,
	GAME_END,
}GAME_MODE;