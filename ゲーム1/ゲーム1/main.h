#pragma once

#include "Scene.h"
#include "Typedef.h"
#include "Player.h"
#include "BackGround.h"

int GameSystemInit();


GAME_MODE mode;

// *���|�C���^
Scene* title;
Scene* play;
Scene* clear;
Scene* over;
Scene* end;
BackGround* background;

void Draw();
void UpData();