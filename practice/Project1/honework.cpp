#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

////day6
////数组实现栈
//#define MaxSize 50
//typedef int ElemType;
//typedef struct {
//	ElemType data[MaxSize];//数组
//	int top;
//}SqStack;
//
//void InitStack(SqStack& S)
//{
//	S.top = -1;//代表栈为空
//}
//
//bool StackEmpty(SqStack S)
//{
//	if (S.top == -1)
//	{
//		return true;
//	}
//	return false;
//}
//
////入栈
//bool Push(SqStack& S, ElemType x)
//{
//	if (S.top == MaxSize - 1)
//	{
//		return false;//栈满了
//	}
//	S.data[++S.top] = x;
//	return true;//返回true就是入栈成功
//}
//
////出栈
//bool Pop(SqStack& S, ElemType& x)
//{
//	if (S.top == -1)//栈为空
//	{
//		return false;
//	}
//	x = S.data[S.top--];//等价于x = S.data[S.top]，再做S.top--
//	return true;
//}
//
////读取栈顶元素
//bool GetTop(SqStack& S, ElemType& m)
//{
//	if (S.top==-1)
//	{
//		return false;
//	}
//	m = S.data[S.top];
//	return true;
//}
//
////实现栈可以用数组，也可以用链表，这里演示使用数组
//int main()
//{
//	SqStack S;//先进后出或者是后进先出
//	bool flag;
//	ElemType m;//用来存放拿出的栈顶元素
//	InitStack(S);//初始化
//	flag = StackEmpty(S);
//	if (flag)
//	{
//		printf("栈是空的\n");
//	}
//
//	Push(S, 3);//入栈元素3
//	Push(S, 4);//入栈元素4
//	Push(S, 5);//入栈元素5
//	flag = GetTop(S, m);//获取栈顶元素，但是S.top值不变
//	if (flag)
//	{
//		printf("获取栈顶的元素为%d\n", m);
//	}
//	flag = Pop(S, m);//弹出栈顶元素
//	if (flag)
//	{
//		printf("弹出元素为 %d\n", m);
//	}
//	return 0;
//}






////day5
////线性表的链式表示（单链表）
//typedef int ElemType;
////静态分配
//typedef struct LNode{
//	ElemType data;//定义的数组，用来存元素
//	struct LNode* next;//指向下一个结点
//}LNode, * LinkList;
//
////尾插法新建链表
//LinkList CreatList2(LinkList& L)//list_tail_insert
//{
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));//带头节点的链表
//	LNode* s, * r = L;//LinkList s,r=L;也可以，r代表链表表尾节点，指向链表尾部
//	//3 4 5 6 7 9999
//	scanf("%d", &x);
//	while (x != 9999) {
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r ->next = s;//让尾部结点指向新结点
//		r = s;//r指向新的表尾结点
//		scanf("%d", &x);
//	}
//	r->next = NULL;//尾结点的next指针赋值为NULL
//	return L;
//}
//
////按序号查找结点值
//LinkList GetElem(LinkList L, int i)
//{
//	int j = 1;
//	LinkList p = L->next;//让p指向第一个结点
//	if (i == 0)
//	{
//		return L;//i是零就返回头结点
//	}
//	if (i < 1)
//	{
//		return NULL;//i是负值就返回空
//	}
//	while (p != NULL && j < i) 
//	{
//		p = p->next;//让p指向下一个结点
//		j++;
//	}
//	return p;
//}
//
////新结点插入第i个位置
//bool ListFrontInsert(LinkList L, int i, ElemType e)
//{
//	LinkList p = GetElem(L, i - 1);//拿到要插入位置的前一个位置的地址值
//	if (NULL == p)
//	{
//		return false;
//	}
//	LinkList s = (LNode*)malloc(sizeof(LNode));//给新结点申请空间
//	s->data = e;//要插入的值放入对应空间
//	s->next = p->next;//插入的步骤
//	p->next = s;
//	return true;
//}
//
////删除第i个结点
//bool ListDelete(LinkList L, int i)
//{
//	LinkList p = GetElem(L, i - 1);//查找删除位置的前驱节点
//	if (p == NULL)
//	{
//		return false;
//	}
//	LinkList q = p->next;
//	if (NULL == q)
// {
//		return false;//要删除的位置不存在
// }
//	p->next = q->next;//断开结点链接
//	free(q);//释放对用结点的空间
//	return true;
//}
//
////打印链表中每个节点的值
//void PrintList(LinkList L)
//{
//	L = L->next;//让L指向第一个有数据的结点
//	while (L != NULL)
//	{
//		printf("%3d", L->data);//打印当前结点数据
//		L = L->next;//指向下一个结点
//		if (L != NULL)
//		{
//			printf("");
//		}
//	}
//	printf("\n");
//}
//
////线性表的链式表示
//int main()
//{
//	LinkList L;//链表头，是结构体指针类型
//	LinkList search;//用来存储拿到的某一个节点
//	CreatList2(L);//输入数据可以为3 4 5 6 7 9999
//
//	search = GetElem(L, 2);
//	if (search != NULL)
//	{
//		printf("%d\n", search->data);
//	}
//
//	ListFrontInsert(L, 2 , 99);
//	PrintList(L);
//	ListDelete(L, 4);//删除第4个结点
//	PrintList(L);
//	return 0;
//}








////day4
//
////线性表的链式表示（单链表）
//typedef int ElemType;
////静态分配
//typedef struct LNode{
//	ElemType data;//定义的数组，用来存元素
//	struct LNode* next;//指向下一个结点
//}LNode, * LinkList;
//
////头插法新建链表
//LinkList CreatList1(LinkList& L)//list_tail_insert
//{
//	LNode* s; int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;//L->data里边没放东西
//	scanf("%d", &x);//从标准输入读取数据
//	//3 4 5 6 7 9999
//	while (x != 9999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));//申请一个新空间给s，强制类型转换
//		s->data = x;//把读取到的值，给新空间中的data成员
//		s->next = L->next;//让新结点的next指针指向链表的第一个元素（第一个放我们数据的元素）
//		L->next = s;//让s作为第一个元素
//		scanf("%d", &x);//读取标准输入
//	}
//	return L;
//}
//
////尾插法新建链表
//LinkList CreatList2(LinkList& L)//list_tail_insert
//{
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));//带头节点的链表
//	LNode* s, * r = L;//LinkList s,r=L;也可以，r代表链表表尾节点，指向链表尾部
//	//3 4 5 6 7 9999
//	scanf("%d", &x);
//	while (x != 9999) {
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r ->next = s;//让尾部结点指向新结点
//		r = s;//r指向新的表尾结点
//		scanf("%d", &x);
//	}
//	r->next = NULL;//尾结点的next指针赋值为NULL
//	return L;
//}
//
////打印链表中每个节点的值
//void PrintList(LinkList L)
//{
//	L = L->next;//让L指向第一个有数据的结点
//	while (L != NULL)
//	{
//		printf("%d", L->data);//打印当前结点数据
//		L = L->next;//指向下一个结点
//		if (L != NULL)
//		{
//			printf("");
//		}
//	}
//	printf("\n");
//}
//
////线性表的链式表示
//int main()
//{
//	LinkList L = NULL;//链表头，是结构体指针类型
//	LinkList search;//用来存储拿到的某一个节点
//	CreatList1(L);//输入数据可以为3 4 5 6 7 9999,头插法新建链表
//	PrintList(L);
//	CreatList2(L);
//	PrintList(L);
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