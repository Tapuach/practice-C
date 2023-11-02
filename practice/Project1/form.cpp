#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//#define MaxSize 50
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
////查找成功，返回位置，位置从1开始，查找失败，返回0
//int LocateElem(SqList L, ElemType e)
//{
//	int i;
//	for(i=0;i<L.length;i++)//遍历顺序表
//		if (L.data[i] == e)
//		{
//			return i + 1;//(i+1)就是元素在顺序表中的位置
//		}
//	return 0;
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
//
//
//int main()
//{
//	SqList L;//顺序表的名称
//	bool ret;//查看返回值，布尔类型只能是true，或者false
//	ElemType del;//用来存储要删除的元素
//	
//	//首先手动在顺序表中赋值
//	L.data[0] = 1;
//	L.data[1] = 2;
//	L.data[2] = 3;
//	L.length = 3;//总计三个元素
//	
//	//插入
//	ret = ListInsert(L,2,60);//往第二个位置插入60这个元素
//	if (ret)
//	{
//		printf("插入成功\n");
//		PrintList(L);//打印成功后的顺序表
//	}
//	else
//	{
//		printf("插入失败请重试\n");
//	}
//
//	//删除
//	ret = ListDelete(L, 1, del);//删除的一个位置的元素并把元素值输出
//	if (ret)
//	{
//		printf("删除成功\n");
//		printf("删除的元素值为 %d\n", del);
//		PrintList(L);
//	}
//	else
//	{
//		printf("删除失败\n");
//	}
//
//	//查找
//	int elem_pos;
//	elem_pos = LocateElem(L, 60);
//	if (elem_pos)
//	{
//		printf("查找成功\n");
//		printf("元素位置为 %d\n", elem_pos);//打印元素位置
//	}
//	else
//	{
//		printf("查找失败\n");
//	}
//	return 0;
//}





//线性表的链式表示
typedef int ElemType;
//静态分配
typedef struct LNode{
	ElemType data;//定义的数组，用来存元素
	struct LNode* next;//指向下一个结点
}LNode, * LinkList;

//头插法新建链表
LinkList CreatList1(LinkList& L)//list_tail_insert
{
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;//L->data里边没放东西
	scanf("%d", &x);//从标准输入读取数据
	//3 4 5 6 7 9999
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//申请一个新空间给s，强制类型转换
		s->data = x;//把读取到的值，给新空间中的data成员
		s->next = L->next;//让新结点的next指针指向链表的第一个元素（第一个放我们数据的元素）
		L->next = s;//让s作为第一个元素
		scanf("%d", &x);//读取标准输入
	}
	return L;
}

//尾插法新建链表
LinkList CreatList2(LinkList& L)//list_tail_insert
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//带头节点的链表
	LNode* s, * r = L;//LinkList s,r=L;也可以，r代表链表表尾节点，指向链表尾部
	//3 4 5 6 7 9999
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r ->next = s;//让尾部结点指向新结点
		r = s;//r指向新的表尾结点
		scanf("%d", &x);
	}
	r->next = NULL;//尾结点的next指针赋值为NULL
	return L;
}

//按序号查找结点值
LinkList GetElem(LinkList L, int i)
{
	int j = 1;
	LinkList p = L->next;//让p指向第一个结点
	if (i == 0)
	{
		return L;//i是零就返回头结点
	}
	if (i < 1)
	{
		return NULL;//i是负值就返回空
	}
	while (p != NULL && j < i) 
	{
		p = p->next;//让p指向下一个结点
		j++;
	}
	return p;
}

//按值查找
LinkList LocateElem(LinkList L, ElemType e)
{
	LinkList p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;	
	}
	return p;
}

//新结点插入第i个位置
bool ListFrontInsert(LinkList L, int i, ElemType e)
{
	LinkList p = GetElem(L, i - 1);//拿到要插入位置的前一个位置的地址值
	if (NULL == p)
	{
		return false;
	}
	LinkList s = (LNode*)malloc(sizeof(LNode));//给新结点申请空间
	s->data = e;//要插入的值放入对应空间
	s->next = p->next;//插入的步骤
	p->next = s;
	return true;
}

////删除第i个结点
//bool ListDelete(LinkList L, int i)
//{
//
//}

//打印链表中每个节点的值
void PrintList(LinkList L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%3d", L->data);//打印当前结点数据
		L = L->next;//指向下一个结点
	}
	printf("\n");
}

//线性表的链式表示
int main()
{
	LinkList L;//链表头，是结构体指针类型
	LinkList search;//用来存储拿到的某一个节点
	//CreatList1(L);//输入数据可以为3 4 5 6 7 9999,头插法新建链表
	CreatList2(L);//输入数据可以为3 4 5 6 7 9999
	PrintList(L);

	search = GetElem(L, 2);
	if (search != NULL)
	{
		printf("按序号查找成功\n");
		printf("%d\n", search->data);
	}

	search = LocateElem(L, 6);//按值查询
	if (search != NULL)
	{
		printf("按值查找成功\n");
		printf("%d\n", search->data);
	}

	ListFrontInsert(L, 2, 99);
	PrintList(L);
	//ListDelete(L, 4);//删除第4个结点
	//PrintList(L);
	return 0;
}