#include "dog.h"

void dog::draw()
{
	//��ʾͼ��
	IMAGE img;
	//����ͼƬ
	loadimage(&img, L"��.jpg", 200, 200, true);
	//���ͼƬ
	putimage(m_x, m_y, &img);
}

void dog::shout()
{
	//PlaySound(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);
	PlaySound(L"������.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void dog::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
