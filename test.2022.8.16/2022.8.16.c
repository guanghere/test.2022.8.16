#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������
//1.�����������һ������
//2.��Ҳ�����
//	��С�˾ͻᷴ����С��
//	�´��˾ͻᷴ���´���
//	����һֱ��
//3.ֱ���¶�Ϊֹ


void menu() //�˵�����Ҫ����ֵ��ֻ�����ڿ��Ĳ�������ѡ��
{
	printf("********************\n");
	printf("******��1.play��******\n");
	printf("******��0.over��******\n");
	printf("********************\n");
}
#include<stdlib.h>//rand��srand��ͷ�ļ�
#include<time.h>//time������ͷ�ļ�
void game() {
	//1.����һ�������
	int ret = rand()%100+1;//�κ���%100�����ֻ������0��99����ô+1����1��100
	//printf("%d\n", ret);

	//2.������
	while (1)//һֱ��
	{
		printf("������:>\n");

		int g = 0;

		scanf("%d", &g);

		if (g > ret) {
			printf("�´���\n");
		}
		else if (g < ret) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;				//�¶�������
		}
	}
}

int main() {

	srand((unsigned int)time(NULL));//time�������ص���time_t,������Ҫǿ������ת��

	int a = 0;//����ѡ��

	do//ʹ��do whileѭ����ԭ������Ϊ������ִ�к��жϣ��൱��������Ϸ���پ���Ҫ��Ҫ���� 
	{
		menu();//�����ȴ�ӡһ���˵�

		printf("��ѡ��\n");

		scanf("%d", &a);// ���� 1 0 ����

		switch (a) //����a��ֵƥ��case���
		//��Ϊ�����������,switch������
		{
		case 1://����Ϸ
			game();//���������һ����Ϸ����
			break;

		case 0:	//����
			printf("������Ϸ\n");
			break;

		default ://����������ͣ������Ϳ��������ӵ����
			printf("ѡ�����������ѡ��\n");
		}

	} while (a);//switch���ѡ�����������	1Ϊ�� 0Ϊ��
				//����1��������Ϸ		0�����˳�

	return 0;
}