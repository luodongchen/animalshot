#include "dog.h"

void dog::draw()
{
	//œ‘ æÕºœÒ
	IMAGE img;
	//º”‘ÿÕº∆¨
	loadimage(&img, L"π∑.jpg", 200, 200, true);
	// ‰≥ˆÕº∆¨
	putimage(m_x, m_y, &img);
}

void dog::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"π∑Ω–…˘.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void dog::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
