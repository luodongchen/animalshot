#include "pig.h"

void pig::draw()
{
	//œ‘ æÕºœÒ
	IMAGE img;
	loadimage(&img, L"÷Ì.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void pig::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"÷ÌΩ–…˘.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void pig::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
