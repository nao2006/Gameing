#include "Enemy.h"
#include "Typedef.h"
#include "DxLib.h"
#include "Typedef.h"

int Dragon;
Enemy::Enemy()
{
	size = {48,48};
	pos = {200, 100};
	hp = 5;
	Dragon = LoadGraph("image/ƒhƒ‰ƒSƒ“.png");
	flam = 0;
	animindex = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Draw()
{
	DrawRectGraph(pos.x, pos.y, size.x, size.y, size.x, size.y, Dragon, true, false);;
}

void Enemy::UpData()
{

}
