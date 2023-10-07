

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
	//初始化图形系统
	initgraph(640, 480);

	//定义一个对象指针数组
	livestock* pls[] = { new dog() , new cattle() , new sheep(),
	 new horse(), new hen(),new pig() };
	
	int pos[][3] = { {0,0},{200,0},{400,0},
					{0,200},{200,200},{400,200} };
	for (int i = 0;i < 6;i++)
	{
		pls[i]->move(pos[i][0],pos[i][1]);
		pls[i]->draw();
	}

	//GetAsyncKeyState是一个用来判断函数调用时指定虚拟键的状态，确定用户当前是否按下了键盘上的一个键的函数。如果按下，则返回值最高位为1。
	MOUSEMSG m;
	while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
	{
		//获取一个鼠标消息。如果没有，就等待
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
					//设置当前线条颜色
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