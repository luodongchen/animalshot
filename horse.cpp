#include "horse.h"
void horse::draw()
{
	//ÏÔÊ¾Í¼Ïñ
	IMAGE img;
	loadimage(&img, L"Âí.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void horse::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"Âí½ÐÉù.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void horse::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
