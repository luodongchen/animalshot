#pragma once
#include "easyx.h"
#include <windows.h>
#pragma comment(lib,"winmm.lib")
class livestock
{
public:
	virtual void draw() = 0;
	virtual void shout() = 0;
	virtual void move(int x, int y) = 0;
protected:
	int m_x;
	int m_y;
};

