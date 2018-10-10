#include "Enemy.h"
#include "Typedef.h"
#include "DxLib.h"


int Dragon;
Enemy::Enemy()
{
	size = {48,48};
	pos = {200, 420};
	lpos = pos;
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
	//DrawRectGraph(pos.x, pos.y, size.x, size.y, size.x, size.y, Dragon, true, false);

	DrawRectGraph(lpos.x, lpos.y,
		size.x * (animindex % 3), size.y,
		size.x, size.y, Dragon, TRUE, FALSE);

	flam++;

	if (flam >= 7)
	{
		animindex = (animindex + 1) < 11 ? ++animindex : 0;
		flam = 0;
	}
}

void Enemy::UpData()
{
	//“–‚½‚è”»’è

}
