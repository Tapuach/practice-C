#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>








////Fib�ǵݹ���
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
////쳲���������
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != EOF)
//	{
//		printf("Fib(%d) = %d\n", num, Fib(num));
//	}
//	return 0;
//}







////���е���ʽ�洢�ṹ
//typedef int ElemType;
//typedef struct LinkNode {
//	ElemType data;
//	struct LinkNode* next;
//}LinkNode;//������Ľṹ��
//
//typedef struct {
//	LinkNode* front, * rear;//����ͷ������β
//}LinkQueue;//�Ƚ��ȳ�
//
//void InitQueue(LinkQueue &Q)
//{
//	Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));//ͷ��βָ��ͬһ�����
//	Q.front->next = NULL;//ͷ����nextָ��ΪNULL
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
////��ӣ�β�����뷨
//void EnQueue(LinkQueue& Q, ElemType x)
//{
//	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//	s->data = x;
//	s->next = NULL;
//	Q.rear->next = s;//rearʼ��ָ��β��
//	Q.rear = s;
//}
//
////���ӣ�ͷ��ɾ����
//bool DeQueue(LinkQueue& Q, ElemType& x)
//{
//	if (Q.front == Q.rear)
//	{
//		return false;//����Ϊ��
//	}
//	LinkNode* p = Q.front->next;//ͷ���ʲô��û�棬����ͷ������һ������������
//	x = p->data;
//	Q.front->next = p->next;//����
//	if (Q.rear == p)//ɾ���������һ��Ԫ��
//	{
//		Q.rear = Q.front;//������Ϊ��
//	}
//	free(p);
//	return true;
//}
//
////ͷ��ɾ������β�����뷨
//int main()
//{
//	LinkQueue Q;
//	bool ret;
//	ElemType element;//�洢����Ԫ��
//	InitQueue(Q);//��ʼ������
//	EnQueue(Q, 3);
//	EnQueue(Q, 4);
//	EnQueue(Q, 5);
//	EnQueue(Q, 6);
//	EnQueue(Q, 7);
//	ret = DeQueue(Q, element);
//	if (ret)
//	{
//		printf("���ӳɹ���Ԫ��ֵΪ %d\n", element);
//	}
//	else
//	{
//		printf("����ʧ��\n");
//	}
//	return 0;
//}









//#define MaxSize 5
//typedef int ElemType;
//typedef struct {
//	ElemType data[MaxSize];//����洢��MaxSize-1����Ԫ��
//	int front, rear;//����ͷ������β
//}SqQueue;
//
////��ʼ��ѭ������
//void InitQueue(SqQueue& Q)
//{
//	Q.front = Q.rear = 0;
//}
//
////�п�
//bool isEmpty(SqQueue Q)
//{
//	if (Q.front == Q.rear)//����ҪΪ��
//	{
//		return true;
//	}
//	return false;
//}
//
////���
//bool EnQueue(SqQueue& Q,ElemType x)
//{
//	if ((Q.rear + 1) % MaxSize == Q.front)//�ж϶����Ƿ����˵�����
//	{
//		return false;//��������
//	}
//	Q.data[Q.rear] = x;
//	Q.rear = (Q.rear + 1) % MaxSize;//����ƶ�һ��
//	return true;
//}
//
////����
//bool DeQueue(SqQueue& Q, ElemType& x)
//{
//	if (Q.front == Q.rear)//����Ϊ��
//	{
//		return false;
//	}
//	x = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;//����ƶ�һ��
//	return true;
//}
//
//int main()
//{
//	SqQueue Q;
//	bool ret;
//	ElemType element;
//	InitQueue(Q);//��ʼ��ѭ������
//	ret = isEmpty(Q);
//	if (ret)
//	{
//		printf("����Ϊ��\n");
//	}
//	else
//	{
//		printf("���в�Ϊ��\n");
//	}
//	EnQueue(Q, 3);
//	EnQueue(Q, 4);
//	EnQueue(Q, 5);
//	ret = EnQueue(Q, 6);
//	ret = EnQueue(Q, 7);
//	if (ret)
//	{
//		printf("��ӳɹ�\n");
//	}
//	else
//	{
//		printf("���ʧ��\n");
//	}
//
//	ret = DeQueue(Q, element);
//	if (ret)
//	{
//		printf("���ӳɹ���Ԫ��ֵΪ %d\n", element);
//	}
//	else
//	{
//		printf("����ʧ��\n");
//	}
//	return 0;
//}





////����ʵ��ջ
//#define MaxSize 50
//typedef int ElemType;
//typedef struct {
//	ElemType data[MaxSize];//����
//	int top;
//}SqStack;
//
//void InitStack(SqStack& S)
//{
//	S.top = -1;//����ջΪ��
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
////��ջ
//bool Push(SqStack& S, ElemType x)
//{
//	if (S.top == MaxSize - 1)
//	{
//		return false;//ջ����
//	}
//	S.data[++S.top] = x;
//	return true;//����true������ջ�ɹ�
//}
//
////��ջ
//bool Pop(SqStack& S, ElemType& x)
//{
//	if (S.top == -1)//ջΪ��
//	{
//		return false;
//	}
//	x = S.data[S.top--];//�ȼ���x = S.data[S.top]������S.top--
//	return true;
//}
//
////��ȡջ��Ԫ��
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
////ʵ��ջ���������飬Ҳ����������������ʾʹ������
//int main()
//{
//	SqStack S;//�Ƚ���������Ǻ���ȳ�
//	bool flag;
//	ElemType m;//��������ó���ջ��Ԫ��
//	InitStack(S);//��ʼ��
//	flag = StackEmpty(S);
//	if (flag)
//	{
//		printf("ջ�ǿյ�\n");
//	}
//
//	Push(S, 3);//��ջԪ��3
//	Push(S, 4);//��ջԪ��4
//	Push(S, 5);//��ջԪ��5
//	flag = GetTop(S, m);//��ȡջ��Ԫ�أ�����S.topֵ����
//	if (flag)
//	{
//		printf("��ȡջ����Ԫ��Ϊ%d\n", m);
//	}
//	flag = Pop(S, m);//����ջ��Ԫ��
//	if (flag)
//	{
//		printf("����Ԫ��Ϊ %d\n", m);
//	}
//	return 0;
//}









////˫������
//typedef int ElemType;
////��̬����
//typedef struct DNode {
//	ElemType data;//��������飬������Ԫ��
//	struct DNode* prior, * next;//ָ����һ�����
//}Dode, * DLinkList;
//
////����Ų��ҽ��ֵ
//DNode* GetElem(DLinkList& DL, int i)
//{
//	int j = 1;
//	DNode* p = DL->next;//��pָ���һ�����
//	if (i == 0)
//	{
//		return DL;//i����ͷ���ͷ���
//	}
//	if (i < 1)
//	{
//		return NULL;//i�Ǹ�ֵ�ͷ��ؿ�
//	}
//	while (p != NULL && j < i)
//	{
//		p = p->next;//��pָ����һ�����
//		j++;
//	}
//	return p;
//}
//
////˫������ͷ�巨
//DLinkList Dlist_head_insert(DLinkList& DL)//list_tail_insert
//{
//	DNode* s; int x;
//	DL = (DLinkList)malloc(sizeof(DNode));//��ͷ��������DL����ͷ���
//	DL->next = NULL;//ǰ��ָ��ͺ���ָ�붼��дΪNULL
//	DL->prior = NULL;
//	scanf("%d", &x);//�ӱ�׼�����ȡ����
//	//3 4 5 6 7 9999
//	while (x != 9999)
//	{
//		s = (DNode*)malloc(sizeof(DNode));//����һ���¿ռ��s��ǿ������ת��
//		s->data = x;//�Ѷ�ȡ����ֵ�����¿ռ��е�data��Ա
//		s->next = DL->next;
//		if (DL->next != NULL)//�����һ�����ʱ������Ҫ��һ������
//		{
//			DL->next->prior = s;
//		}
//		s->prior = DL;//Ҫ����Ľ��ָ��ͷ���
//		DL->next = s;
//		scanf("%d", &x);//��ȡ��׼����
//	}
//	return DL;
//}
//
////˫������β�巨
//DLinkList Dlist_tail_insert(DLinkList& DL)
//{
//	int x;
//	DL = (DLinkList)malloc(sizeof(DNode));//��ͷ�ڵ������
//	DNode* s, * r = DL;//r����βָ��
//	DL->prior = NULL;
//	//3 4 5 6 7 9999
//	scanf("%d", &x);
//	while (x != 9999) {
//		s = (DNode*)malloc(sizeof(DNode));
//		s->data = x;
//		r->next = s;
//		s->prior = r;
//		r = s;//rָ���µı�β���
//		scanf("%d", &x);
//	}
//	r->next = NULL;//β����nextָ�븳ֵΪNULL
//	return DL;
//}
//
////�½������i��λ��
//bool DListFrontInsert(DLinkList DL, int i, ElemType e)
//{
//	DLinkList p = GetElem(DL, i - 1);//�õ�Ҫ����λ�õ�ǰһ��λ�õĵ�ֵַ
//	if (NULL == p)
//	{
//		return false;
//	}
//	DLinkList s = (DLinkList)malloc(sizeof(DNode));//���½������ռ�
//	s->data = e;//Ҫ�����ֵ�����Ӧ�ռ�
//	s->next = p->next;//����Ĳ���
//	p->next->prior = s;
//	s->prior = p;
//	p->next = s;
//	return true;
//}
//
////ɾ����i�����
//bool DListDelete(DLinkList DL, int i)
//{
//	DLinkList p = GetElem(DL, i - 1);//����ɾ��λ�õ�ǰ���ڵ�
//	if (p == NULL)
//	{
//		return false;
//	}
//	DLinkList q;
//	q = p->next;
//	if (q == NULL)//ɾ���Ľ�㲻����
//	{
//		return false;
//	}
//	p->next = q->next;//�Ͽ��������
//	if (q->next != NULL)//q->nextΪNULLɾ���������һ�����
//	{
//		q->next->prior = p;
//	}
//	free(q);//�ͷŶ��ý��Ŀռ�
//	return true;
//}
//
////�����ӡ
//void PrintDList(DLinkList DL)
//{
//	DL = DL->next;
//	while (DL != NULL)
//	{
//		printf("%3d", DL->data);//��ӡ��ǰ�������
//		DL = DL->next;//ָ����һ�����
//	}
//	printf("\n");
//}
//
////˫������ɾ��
//int main()
//{
//	DLinkList DL;//����ͷ���ǽṹ��ָ������
//	DLinkList search;//�����洢�õ���ĳһ���ڵ�
//
//	//Dlist_head_insert(DL);//ͷ������
//	Dlist_tail_insert(DL);//β������
//	//�������ݿ���Ϊ3 4 5 6 7 9999
//	PrintDList(DL);
//
//	search = GetElem(DL, 2);
//	if (search != NULL)
//	{
//		printf("����Ų��ҳɹ�\n");
//		printf("%d\n", search->data);
//	}
//
//	DListFrontInsert(DL, 3, 99);
//	PrintDList(DL);
//	//DListDelete(DL, 2);//ɾ����2�����
//	//PrintDList(DL);
//	return 0;
//}







////���Ա����ʽ��ʾ��������
//typedef int ElemType;
////��̬����
//typedef struct LNode{
//	ElemType data;//��������飬������Ԫ��
//	struct LNode* next;//ָ����һ�����
//}LNode, * LinkList;
//
////ͷ�巨�½�����
//LinkList CreatList1(LinkList& L)//list_tail_insert
//{
//	LNode* s; int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;//L->data���û�Ŷ���
//	scanf("%d", &x);//�ӱ�׼�����ȡ����
//	//3 4 5 6 7 9999
//	while (x != 9999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));//����һ���¿ռ��s��ǿ������ת��
//		s->data = x;//�Ѷ�ȡ����ֵ�����¿ռ��е�data��Ա
//		s->next = L->next;//���½���nextָ��ָ������ĵ�һ��Ԫ�أ���һ�����������ݵ�Ԫ�أ�
//		L->next = s;//��s��Ϊ��һ��Ԫ��
//		scanf("%d", &x);//��ȡ��׼����
//	}
//	return L;
//}
//
////β�巨�½�����
//LinkList CreatList2(LinkList& L)//list_tail_insert
//{
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));//��ͷ�ڵ������
//	LNode* s, * r = L;//LinkList s,r=L;Ҳ���ԣ�r���������β�ڵ㣬ָ������β��
//	//3 4 5 6 7 9999
//	scanf("%d", &x);
//	while (x != 9999) {
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r ->next = s;//��β�����ָ���½��
//		r = s;//rָ���µı�β���
//		scanf("%d", &x);
//	}
//	r->next = NULL;//β����nextָ�븳ֵΪNULL
//	return L;
//}
//
////����Ų��ҽ��ֵ
//LinkList GetElem(LinkList L, int i)
//{
//	int j = 1;
//	LinkList p = L->next;//��pָ���һ�����
//	if (i == 0)
//	{
//		return L;//i����ͷ���ͷ���
//	}
//	if (i < 1)
//	{
//		return NULL;//i�Ǹ�ֵ�ͷ��ؿ�
//	}
//	while (p != NULL && j < i) 
//	{
//		p = p->next;//��pָ����һ�����
//		j++;
//	}
//	return p;
//}
//
////��ֵ����
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
////�½������i��λ��
//bool ListFrontInsert(LinkList L, int i, ElemType e)
//{
//	LinkList p = GetElem(L, i - 1);//�õ�Ҫ����λ�õ�ǰһ��λ�õĵ�ֵַ
//	if (NULL == p)
//	{
//		return false;
//	}
//	LinkList s = (LNode*)malloc(sizeof(LNode));//���½������ռ�
//	s->data = e;//Ҫ�����ֵ�����Ӧ�ռ�
//	s->next = p->next;//����Ĳ���
//	p->next = s;
//	return true;
//}
//
////ɾ����i�����
//bool ListDelete(LinkList L, int i)
//{
//	LinkList p = GetElem(L, i - 1);//����ɾ��λ�õ�ǰ���ڵ�
//	if (p == NULL)
//	{
//		return false;
//	}
//	LinkList q = p->next;
//	if (NULL == q)
// {
//		return false;//Ҫɾ����λ�ò�����
// }
//	p->next = q->next;//�Ͽ��������
//	free(q);//�ͷŶ��ý��Ŀռ�
//	return true;
//}
//
////��ӡ������ÿ���ڵ��ֵ
//void PrintList(LinkList L)
//{
//	L = L->next;
//	while (L != NULL)
//	{
//		printf("%3d", L->data);//��ӡ��ǰ�������
//		L = L->next;//ָ����һ�����
//	}
//	printf("\n");
//}
//
////���Ա����ʽ��ʾ
//int main()
//{
//	LinkList L;//����ͷ���ǽṹ��ָ������
//	LinkList search;//�����洢�õ���ĳһ���ڵ�
//	//CreatList1(L);//�������ݿ���Ϊ3 4 5 6 7 9999,ͷ�巨�½�����
//	CreatList2(L);//�������ݿ���Ϊ3 4 5 6 7 9999
//	PrintList(L);
//
//	search = GetElem(L, 2);
//	if (search != NULL)
//	{
//		printf("����Ų��ҳɹ�\n");
//		printf("%d\n", search->data);
//	}
//
//	search = LocateElem(L, 6);//��ֵ��ѯ
//	if (search != NULL)
//	{
//		printf("��ֵ���ҳɹ�\n");
//		printf("%d\n", search->data);
//	}
//
//	ListFrontInsert(L, 2, 99);
//	PrintList(L);
//	ListDelete(L, 4);//ɾ����4�����
//	PrintList(L);
//	return 0;
//}










//˳��洢
//#define MaxSize 50
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
////���ҳɹ�������λ�ã�λ�ô�1��ʼ������ʧ�ܣ�����0
//int LocateElem(SqList L, ElemType e)
//{
//	int i;
//	for(i=0;i<L.length;i++)//����˳���
//		if (L.data[i] == e)
//		{
//			return i + 1;//(i+1)����Ԫ����˳����е�λ��
//		}
//	return 0;
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
//
//
//int main()
//{
//	SqList L;//˳��������
//	bool ret;//�鿴����ֵ����������ֻ����true������false
//	ElemType del;//�����洢Ҫɾ����Ԫ��
//	
//	//�����ֶ���˳����и�ֵ
//	L.data[0] = 1;
//	L.data[1] = 2;
//	L.data[2] = 3;
//	L.length = 3;//�ܼ�����Ԫ��
//	
//	//����
//	ret = ListInsert(L,2,60);//���ڶ���λ�ò���60���Ԫ��
//	if (ret)
//	{
//		printf("����ɹ�\n");
//		PrintList(L);//��ӡ�ɹ����˳���
//	}
//	else
//	{
//		printf("����ʧ��������\n");
//	}
//
//	//ɾ��
//	ret = ListDelete(L, 1, del);//ɾ����һ��λ�õ�Ԫ�ز���Ԫ��ֵ���
//	if (ret)
//	{
//		printf("ɾ���ɹ�\n");
//		printf("ɾ����Ԫ��ֵΪ %d\n", del);
//		PrintList(L);
//	}
//	else
//	{
//		printf("ɾ��ʧ��\n");
//	}
//
//	//����
//	int elem_pos;
//	elem_pos = LocateElem(L, 60);
//	if (elem_pos)
//	{
//		printf("���ҳɹ�\n");
//		printf("Ԫ��λ��Ϊ %d\n", elem_pos);//��ӡԪ��λ��
//	}
//	else
//	{
//		printf("����ʧ��\n");
//	}
//	return 0;
//}
