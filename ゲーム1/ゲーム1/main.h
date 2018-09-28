#pragma once

#include "Scene.h"
#include "Typedef.h"
#include "Player.h"
#include "BackGround.h"

int GameSystemInit();


GAME_MODE mode;

// *Å©É|ÉCÉìÉ^
Scene* title;
Scene* play;
Scene* clear;
Scene* over;
Scene* end;

void Draw();
void UpData();