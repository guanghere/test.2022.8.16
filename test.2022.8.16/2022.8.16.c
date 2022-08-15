#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//猜数字
//1.电脑随机生成一个数字
//2.玩家猜数字
//	猜小了就会反馈猜小了
//	猜大了就会反馈猜大了
//	可以一直猜
//3.直到猜对为止


void menu() //菜单不需要返回值，只是用于看的并且做出选择
{
	printf("********************\n");
	printf("******—1.play—******\n");
	printf("******—0.over—******\n");
	printf("********************\n");
}
#include<stdlib.h>//rand和srand的头文件
#include<time.h>//time函数的头文件
void game() {
	//1.生成一个随机数
	int ret = rand()%100+1;//任何数%100余的数只可能是0到99，那么+1就是1到100
	//printf("%d\n", ret);

	//2.猜数字
	while (1)//一直猜
	{
		printf("猜数字:>\n");

		int g = 0;

		scanf("%d", &g);

		if (g > ret) {
			printf("猜大了\n");
		}
		else if (g < ret) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
			break;				//猜对了跳出
		}
	}
}

int main() {

	srand((unsigned int)time(NULL));//time函数返回的是time_t,所以需要强制类型转换

	int a = 0;//做出选择

	do//使用do while循环的原因是因为可以先执行后判断，相当于先玩游戏，再决定要不要继续 
	{
		menu();//进来先打印一个菜单

		printf("请选择\n");

		scanf("%d", &a);// 输入 1 0 其他

		switch (a) //根据a的值匹配case语句
		//因为输入的是数字,switch语句最佳
		{
		case 1://玩游戏
			game();//这里假设有一个游戏主体
			break;

		case 0:	//结束
			printf("结束游戏\n");
			break;

		default ://不做过多解释，不懂就看上面链接的详解
			printf("选择错误，请重新选择\n");
		}

	} while (a);//switch语句选择后来到这里	1为真 0为假
				//所以1就是玩游戏		0就是退出

	return 0;
}