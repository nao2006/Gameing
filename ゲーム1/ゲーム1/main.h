#pragma once

#include "Scene.h"
#include "Typedef.h"
#include "Player.h"

int GameSystemInit();



GAME_MODE mode;

// *���|�C���^
Scene* title;
Scene* play;
Scene* clear;
Scene* over;
Scene* end;


void Draw();
void UpData();