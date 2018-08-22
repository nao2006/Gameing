#pragma once

//using namespace std;
#include "Scene.h"
#include "Typedef.h"

int GameSystemInit();


GAME_MODE mode;

// *Å©É|ÉCÉìÉ^
Scene* title;
Scene* clear;
Scene* over;
Scene* end;

void UpData();