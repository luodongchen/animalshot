#include "hen.h"

void hen::draw()
{
	//��ʾͼ��
	IMAGE img;
	loadimage(&img, L"��.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void hen::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"������.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void hen::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
