#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;
//静态分配
typedef struct {
	ElemType data[MaxSize];//定义的数组，用来存元素
	int length;//当前顺序表中有多少个元素
}SqList;

//i代表插入的位置，从1开始，e是要插入的元素
bool ListInsert(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)//判断要插入的位置是否合法
		return false;
	if (L.length > MaxSize)//判断元素是否存满
		return false;
	for (int j = L.length; j >= i; j--)//移动顺序表中的元素,依次往后移动
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;
	L.length++;
	return true;//走到这里代表插入成功，返回true
}

//删除使用元素e的引用的目的是拿出对应的值
bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length)//如果删除位置不合法
		return false;
	if (L.length == 0)//顺序表中没有长度无需删除
		return false;
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++)//从i的位置把元素依次往前覆盖
		L.data[j - 1] = L.data[j];
	L.length--;//删除一个元素顺序表长度减一
	return true;
}

//查找成功，返回位置，位置从1开始，查找失败，返回0
int LocateElem(SqList L, ElemType e)
{
	int i;
	for(i=0;i<L.length;i++)//遍历顺序表
		if (L.data[i] == e)
		{
			return i + 1;//(i+1)就是元素在顺序表中的位置
		}
	return 0;
}

//打印顺序表
void PrintList(SqList& L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);//要求所以元素打印到一排
	}
	printf("\n");
}


int main()
{
	SqList L;//顺序表的名称
	bool ret;//查看返回值，布尔类型只能是true，或者false
	ElemType del;//用来存储要删除的元素
	
	//首先手动在顺序表中赋值
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;//总计三个元素
	
	//插入
	ret = ListInsert(L,2,60);//往第二个位置插入60这个元素
	if (ret)
	{
		printf("插入成功\n");
		PrintList(L);//打印成功后的顺序表
	}
	else
	{
		printf("插入失败请重试\n");
	}

	//删除
	ret = ListDelete(L, 1, del);//删除的一个位置的元素并把元素值输出
	if (ret)
	{
		printf("删除成功\n");
		printf("删除的元素值为 %d\n", del);
		PrintList(L);
	}
	else
	{
		printf("删除失败\n");
	}

	//查找
	int elem_pos;
	elem_pos = LocateElem(L, 60);
	if (elem_pos)
	{
		printf("查找成功\n");
		printf("元素位置为 %d\n", elem_pos);//打印元素位置
	}
	else
	{
		printf("查找失败\n");
	}
	return 0;
}