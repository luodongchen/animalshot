#include "cattle.h"

void cattle::draw()
{
	//��ʾͼ��
	IMAGE img;
	loadimage(&img, L"ţ.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void cattle::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"ţ����.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void cattle::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
