#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

////�м�day1��ҵ
//struct student {
//	int num;
//	char name[20];
//	char sex;
//};//����һ���ṹ������
//
//int main()
//{
//	struct student s;
//	scanf("%d%s %c",&s.num,&s.name,&s.sex);
//	printf("%d %s %c\n", s.num, s.name, s.sex);
//	return 0;
//}



////�м�day2��ҵ
//void mod_pointer(char*& p)
//{
//	p = (char*)malloc(100);
//	fgets(p, 100, stdin);//���ʹ��fgets�������һ��ָ��������м������ָ��ָ��Ŀռ��С
//
//}
//
//int main()
//{
//	char* p;
//	mod_pointer(p);
//	puts(p);
//	return 0;
//}



////�м�day3��ҵ
//#define MaxSize 100
//
//typedef int ElemType;
////��̬����
//typedef struct {
//	ElemType data[MaxSize];//��������飬������Ԫ��
//	int length;//��ǰ˳������ж��ٸ�Ԫ��
//}SqList;
//
////i��������λ�ã���1��ʼ��e��Ҫ�����Ԫ��
//bool ListInsert(SqList& L, int i, ElemType e)
//{
//	if (i<1 || i>L.length + 1)//�ж�Ҫ�����λ���Ƿ�Ϸ�
//		return false;
//	if (L.length > MaxSize)//�ж�Ԫ���Ƿ����
//		return false;
//	for (int j = L.length; j >= i; j--)//�ƶ�˳����е�Ԫ��,���������ƶ�
//		L.data[j] = L.data[j - 1];
//	L.data[i - 1] = e;
//	L.length++;
//	return true;//�ߵ�����������ɹ�������true
//}
//
////ɾ��ʹ��Ԫ��e�����õ�Ŀ�����ó���Ӧ��ֵ
//bool ListDelete(SqList& L, int i, ElemType& e)
//{
//	if (i<1 || i>L.length)//���ɾ��λ�ò��Ϸ�
//		return false;
//	if (L.length == 0)//˳�����û�г�������ɾ��
//		return false;
//	e = L.data[i - 1];
//	for (int j = i; j < L.length; j++)//��i��λ�ð�Ԫ��������ǰ����
//		L.data[j - 1] = L.data[j];
//	L.length--;//ɾ��һ��Ԫ��˳����ȼ�һ
//	return true;
//}
//
////��ӡ˳���
//void PrintList(SqList& L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("%3d", L.data[i]);//Ҫ������Ԫ�ش�ӡ��һ��
//	}
//	printf("\n");
//}
////Ҫ��Ҫ�����ã����ǿ��ǲ������Ӻ�����ȥ�ı��������ж�Ӧ�ı�����Ҫ�ģ���Ҫ��
//
//
//int main()
//{
//	SqList L;//˳��������
//	bool ret_1;//�鿴����ֵ����������ֻ����true������false
//	bool ret_2;
//	ElemType del;//�����洢Ҫɾ����Ԫ��
//	int add_p;
//	int del_p;
//	//�����ֶ���˳����и�ֵ
//
//	L.data[0] = 1;
//	L.data[1] = 2;
//	L.data[2] = 3;
//	L.length = 3;//�ܼ�����Ԫ��
//	
//	//����
//	scanf("%d", &add_p);//��ȡ��ӵ�Ԫ��ֵ
//	ret_1 = ListInsert(L,2,add_p);//���ڶ���λ�ò���60���Ԫ��
//	if (ret_1)
//	{
//		printf("succeed\n");
//		PrintList(L);//��ӡ�ɹ����˳���
//	}
//	else
//	{
//		printf("false\n");
//	}
//
//	//ɾ��
//	scanf("%d", &del_p);//��ȡɾ��Ԫ�ص�λ��
//	ret_2 = ListDelete(L,del_p, del);//ɾ����һ��λ�õ�Ԫ�ز���Ԫ��ֵ���
//	if (ret_2)
//	{
//		printf("succeed\n");
//		PrintList(L);
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}