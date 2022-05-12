#pragma once

#include <GL/glew.h>
#include <glfw3.h>
#include "Character.h"
#include "CDT_Math.h"

#define JUMP_VELOCITY				18.0f
#define MOVE_VELOCITY_PLAYER		5.0f

class Player : public Character
{
	public:
		Player();
		void getInput();
};