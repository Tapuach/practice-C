#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

////中级day1作业
//struct student {
//	int num;
//	char name[20];
//	char sex;
//};//声明一个结构体类型
//
//int main()
//{
//	struct student s;
//	scanf("%d%s %c",&s.num,&s.name,&s.sex);
//	printf("%d %s %c\n", s.num, s.name, s.sex);
//	return 0;
//}



////中级day2作业
//void mod_pointer(char*& p)
//{
//	p = (char*)malloc(100);
//	fgets(p, 100, stdin);//如果使用fgets传入的是一个指针变量，中间参数是指针指向的空间大小
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



////中级day3作业
//#define MaxSize 100
//
//typedef int ElemType;
////静态分配
//typedef struct {
//	ElemType data[MaxSize];//定义的数组，用来存元素
//	int length;//当前顺序表中有多少个元素
//}SqList;
//
////i代表插入的位置，从1开始，e是要插入的元素
//bool ListInsert(SqList& L, int i, ElemType e)
//{
//	if (i<1 || i>L.length + 1)//判断要插入的位置是否合法
//		return false;
//	if (L.length > MaxSize)//判断元素是否存满
//		return false;
//	for (int j = L.length; j >= i; j--)//移动顺序表中的元素,依次往后移动
//		L.data[j] = L.data[j - 1];
//	L.data[i - 1] = e;
//	L.length++;
//	return true;//走到这里代表插入成功，返回true
//}
//
////删除使用元素e的引用的目的是拿出对应的值
//bool ListDelete(SqList& L, int i, ElemType& e)
//{
//	if (i<1 || i>L.length)//如果删除位置不合法
//		return false;
//	if (L.length == 0)//顺序表中没有长度无需删除
//		return false;
//	e = L.data[i - 1];
//	for (int j = i; j < L.length; j++)//从i的位置把元素依次往前覆盖
//		L.data[j - 1] = L.data[j];
//	L.length--;//删除一个元素顺序表长度减一
//	return true;
//}
//
////打印顺序表
//void PrintList(SqList& L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("%3d", L.data[i]);//要求所以元素打印到一排
//	}
//	printf("\n");
//}
////要不要加引用，就是看是不是在子函数中去改变主函数中对应的变量，要改，就要加
//
//
//int main()
//{
//	SqList L;//顺序表的名称
//	bool ret_1;//查看返回值，布尔类型只能是true，或者false
//	bool ret_2;
//	ElemType del;//用来存储要删除的元素
//	int add_p;
//	int del_p;
//	//首先手动在顺序表中赋值
//
//	L.data[0] = 1;
//	L.data[1] = 2;
//	L.data[2] = 3;
//	L.length = 3;//总计三个元素
//	
//	//插入
//	scanf("%d", &add_p);//读取添加的元素值
//	ret_1 = ListInsert(L,2,add_p);//往第二个位置插入60这个元素
//	if (ret_1)
//	{
//		printf("succeed\n");
//		PrintList(L);//打印成功后的顺序表
//	}
//	else
//	{
//		printf("false\n");
//	}
//
//	//删除
//	scanf("%d", &del_p);//读取删除元素的位置
//	ret_2 = ListDelete(L,del_p, del);//删除的一个位置的元素并把元素值输出
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