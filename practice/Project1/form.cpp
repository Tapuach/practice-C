#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>








////Fib是递归数
//int Fib(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
////斐波那契数列
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != EOF)
//	{
//		printf("Fib(%d) = %d\n", num, Fib(num));
//	}
//	return 0;
//}







////队列的链式存储结构
//typedef int ElemType;
//typedef struct LinkNode {
//	ElemType data;
//	struct LinkNode* next;
//}LinkNode;//链表结点的结构体
//
//typedef struct {
//	LinkNode* front, * rear;//链表头，链表尾
//}LinkQueue;//先进先出
//
//void InitQueue(LinkQueue &Q)
//{
//	Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));//头和尾指向同一个结点
//	Q.front->next = NULL;//头结点的next指针为NULL
//}
//
//bool IsEmpty(LinkQueue Q)
//{
//	if (Q.front == Q.rear)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////入队，尾部插入法
//void EnQueue(LinkQueue& Q, ElemType x)
//{
//	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//	s->data = x;
//	s->next = NULL;
//	Q.rear->next = s;//rear始终指向尾部
//	Q.rear = s;
//}
//
////出队，头部删除法
//bool DeQueue(LinkQueue& Q, ElemType& x)
//{
//	if (Q.front == Q.rear)
//	{
//		return false;//队列为空
//	}
//	LinkNode* p = Q.front->next;//头结点什么都没存，所以头结点的下一个结点才有数据
//	x = p->data;
//	Q.front->next = p->next;//断链
//	if (Q.rear == p)//删除的是最后一个元素
//	{
//		Q.rear = Q.front;//队列置为空
//	}
//	free(p);
//	return true;
//}
//
////头部删除法，尾部插入法
//int main()
//{
//	LinkQueue Q;
//	bool ret;
//	ElemType element;//存储出队元素
//	InitQueue(Q);//初始化队列
//	EnQueue(Q, 3);
//	EnQueue(Q, 4);
//	EnQueue(Q, 5);
//	EnQueue(Q, 6);
//	EnQueue(Q, 7);
//	ret = DeQueue(Q, element);
//	if (ret)
//	{
//		printf("出队成功，元素值为 %d\n", element);
//	}
//	else
//	{
//		printf("出队失败\n");
//	}
//	return 0;
//}









//#define MaxSize 5
//typedef int ElemType;
//typedef struct {
//	ElemType data[MaxSize];//数组存储（MaxSize-1）个元素
//	int front, rear;//队列头，队列尾
//}SqQueue;
//
////初始化循环队列
//void InitQueue(SqQueue& Q)
//{
//	Q.front = Q.rear = 0;
//}
//
////判空
//bool isEmpty(SqQueue Q)
//{
//	if (Q.front == Q.rear)//不需要为零
//	{
//		return true;
//	}
//	return false;
//}
//
////入队
//bool EnQueue(SqQueue& Q,ElemType x)
//{
//	if ((Q.rear + 1) % MaxSize == Q.front)//判断队列是否满了的条件
//	{
//		return false;//队列满了
//	}
//	Q.data[Q.rear] = x;
//	Q.rear = (Q.rear + 1) % MaxSize;//向后移动一格
//	return true;
//}
//
////出队
//bool DeQueue(SqQueue& Q, ElemType& x)
//{
//	if (Q.front == Q.rear)//队列为空
//	{
//		return false;
//	}
//	x = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;//向后移动一格
//	return true;
//}
//
//int main()
//{
//	SqQueue Q;
//	bool ret;
//	ElemType element;
//	InitQueue(Q);//初始化循环队列
//	ret = isEmpty(Q);
//	if (ret)
//	{
//		printf("队列为空\n");
//	}
//	else
//	{
//		printf("队列不为空\n");
//	}
//	EnQueue(Q, 3);
//	EnQueue(Q, 4);
//	EnQueue(Q, 5);
//	ret = EnQueue(Q, 6);
//	ret = EnQueue(Q, 7);
//	if (ret)
//	{
//		printf("入队成功\n");
//	}
//	else
//	{
//		printf("入队失败\n");
//	}
//
//	ret = DeQueue(Q, element);
//	if (ret)
//	{
//		printf("出队成功，元素值为 %d\n", element);
//	}
//	else
//	{
//		printf("出队失败\n");
//	}
//	return 0;
//}





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









////双向链表
//typedef int ElemType;
////静态分配
//typedef struct DNode {
//	ElemType data;//定义的数组，用来存元素
//	struct DNode* prior, * next;//指向下一个结点
//}Dode, * DLinkList;
//
////按序号查找结点值
//DNode* GetElem(DLinkList& DL, int i)
//{
//	int j = 1;
//	DNode* p = DL->next;//让p指向第一个结点
//	if (i == 0)
//	{
//		return DL;//i是零就返回头结点
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
////双向链表头插法
//DLinkList Dlist_head_insert(DLinkList& DL)//list_tail_insert
//{
//	DNode* s; int x;
//	DL = (DLinkList)malloc(sizeof(DNode));//带头结点的链表，DL就是头结点
//	DL->next = NULL;//前驱指针和后驱指针都填写为NULL
//	DL->prior = NULL;
//	scanf("%d", &x);//从标准输入读取数据
//	//3 4 5 6 7 9999
//	while (x != 9999)
//	{
//		s = (DNode*)malloc(sizeof(DNode));//申请一个新空间给s，强制类型转换
//		s->data = x;//把读取到的值，给新空间中的data成员
//		s->next = DL->next;
//		if (DL->next != NULL)//插入第一个结点时，不需要这一步操作
//		{
//			DL->next->prior = s;
//		}
//		s->prior = DL;//要插入的结点指向头结点
//		DL->next = s;
//		scanf("%d", &x);//读取标准输入
//	}
//	return DL;
//}
//
////双向链表尾插法
//DLinkList Dlist_tail_insert(DLinkList& DL)
//{
//	int x;
//	DL = (DLinkList)malloc(sizeof(DNode));//带头节点的链表
//	DNode* s, * r = DL;//r代表尾指针
//	DL->prior = NULL;
//	//3 4 5 6 7 9999
//	scanf("%d", &x);
//	while (x != 9999) {
//		s = (DNode*)malloc(sizeof(DNode));
//		s->data = x;
//		r->next = s;
//		s->prior = r;
//		r = s;//r指向新的表尾结点
//		scanf("%d", &x);
//	}
//	r->next = NULL;//尾结点的next指针赋值为NULL
//	return DL;
//}
//
////新结点插入第i个位置
//bool DListFrontInsert(DLinkList DL, int i, ElemType e)
//{
//	DLinkList p = GetElem(DL, i - 1);//拿到要插入位置的前一个位置的地址值
//	if (NULL == p)
//	{
//		return false;
//	}
//	DLinkList s = (DLinkList)malloc(sizeof(DNode));//给新结点申请空间
//	s->data = e;//要插入的值放入对应空间
//	s->next = p->next;//插入的步骤
//	p->next->prior = s;
//	s->prior = p;
//	p->next = s;
//	return true;
//}
//
////删除第i个结点
//bool DListDelete(DLinkList DL, int i)
//{
//	DLinkList p = GetElem(DL, i - 1);//查找删除位置的前驱节点
//	if (p == NULL)
//	{
//		return false;
//	}
//	DLinkList q;
//	q = p->next;
//	if (q == NULL)//删除的结点不存在
//	{
//		return false;
//	}
//	p->next = q->next;//断开结点链接
//	if (q->next != NULL)//q->next为NULL删除的是最后一个结点
//	{
//		q->next->prior = p;
//	}
//	free(q);//释放对用结点的空间
//	return true;
//}
//
////链表打印
//void PrintDList(DLinkList DL)
//{
//	DL = DL->next;
//	while (DL != NULL)
//	{
//		printf("%3d", DL->data);//打印当前结点数据
//		DL = DL->next;//指向下一个结点
//	}
//	printf("\n");
//}
//
////双链表增删查
//int main()
//{
//	DLinkList DL;//链表头，是结构体指针类型
//	DLinkList search;//用来存储拿到的某一个节点
//
//	//Dlist_head_insert(DL);//头部插入
//	Dlist_tail_insert(DL);//尾部插入
//	//输入数据可以为3 4 5 6 7 9999
//	PrintDList(DL);
//
//	search = GetElem(DL, 2);
//	if (search != NULL)
//	{
//		printf("按序号查找成功\n");
//		printf("%d\n", search->data);
//	}
//
//	DListFrontInsert(DL, 3, 99);
//	PrintDList(DL);
//	//DListDelete(DL, 2);//删除第2个结点
//	//PrintDList(DL);
//	return 0;
//}







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
////按值查找
//LinkList LocateElem(LinkList L, ElemType e)
//{
//	LinkList p = L->next;
//	while (p != NULL && p->data != e)
//	{
//		p = p->next;	
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
//	L = L->next;
//	while (L != NULL)
//	{
//		printf("%3d", L->data);//打印当前结点数据
//		L = L->next;//指向下一个结点
//	}
//	printf("\n");
//}
//
////线性表的链式表示
//int main()
//{
//	LinkList L;//链表头，是结构体指针类型
//	LinkList search;//用来存储拿到的某一个节点
//	//CreatList1(L);//输入数据可以为3 4 5 6 7 9999,头插法新建链表
//	CreatList2(L);//输入数据可以为3 4 5 6 7 9999
//	PrintList(L);
//
//	search = GetElem(L, 2);
//	if (search != NULL)
//	{
//		printf("按序号查找成功\n");
//		printf("%d\n", search->data);
//	}
//
//	search = LocateElem(L, 6);//按值查询
//	if (search != NULL)
//	{
//		printf("按值查找成功\n");
//		printf("%d\n", search->data);
//	}
//
//	ListFrontInsert(L, 2, 99);
//	PrintList(L);
//	ListDelete(L, 4);//删除第4个结点
//	PrintList(L);
//	return 0;
//}










//顺序存储
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
