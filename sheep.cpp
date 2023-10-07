#include "sheep.h"

void sheep::draw()
{
	//ÏÔÊ¾Í¼Ïñ
	IMAGE img;
	loadimage(&img, L"Ñò.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void sheep::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"Ñò½ÐÉù.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void sheep::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
