

#include <iostream>
#include "easyx.h"
#include "livestock.h"
#include "dog.h"
#include "cattle.h"
#include "sheep.h"
#include "horse.h"
#include "hen.h"
#include "pig.h"
using namespace std;

int main()
{
	//��ʼ��ͼ��ϵͳ
	initgraph(640, 480);

	//����һ������ָ������
	livestock* pls[] = { new dog() , new cattle() , new sheep(),
	 new horse(), new hen(),new pig() };
	
	int pos[][3] = { {0,0},{200,0},{400,0},
					{0,200},{200,200},{400,200} };
	for (int i = 0;i < 6;i++)
	{
		pls[i]->move(pos[i][0],pos[i][1]);
		pls[i]->draw();
	}

	//GetAsyncKeyState��һ�������жϺ�������ʱָ���������״̬��ȷ���û���ǰ�Ƿ����˼����ϵ�һ�����ĺ�����������£��򷵻�ֵ���λΪ1��
	MOUSEMSG m;
	while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
	{
		//��ȡһ�������Ϣ�����û�У��͵ȴ�
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			for (int i = 0; i < 6; i++)
			{
				pls[i]->draw();
			}
			for (int i = 0; i < 6; i++)
			{
				if ((pos[i][0] < m.x && m.x < pos[i][0] + 200) && (pos[i][1] < m.y && m.y < pos[i][1] + 200))
				{
					//���õ�ǰ������ɫ
					setlinecolor(0x800000);
					rectangle(pos[i][0] + 1, pos[i][1] + 1, pos[i][0] + 198, pos[i][1] + 198);
					pls[i]->shout();
					break;
				}
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		delete pls[i];
	}
	closegraph();
	system("pause");
	return 0;
}