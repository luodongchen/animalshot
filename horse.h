#pragma once
#include "livestock.h"
class horse :
    public livestock
{
public:
	virtual void draw();//alt + enter
	virtual void shout();
	virtual void move(int x, int y);
};

