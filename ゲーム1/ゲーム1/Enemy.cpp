#include "Enemy.h"
#include "Typedef.h"
#include "DxLib.h"

int Dragon;

Enemy::Enemy()
{
	size = {60,60};
	pos = {0, 0};
	Dragon = LoadGraph("image/ƒhƒ‰ƒSƒ“.png");
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
