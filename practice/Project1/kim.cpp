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
	return true;
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
	ret = ListInsert(L,2,60);//往第二个位置插入60这个元素
	if (ret)
	{
		printf("插入成功\n");
		//PrintList(L);
	}
	else
	{
		printf("插入失败请重试\n");
	}
	return 0;
}