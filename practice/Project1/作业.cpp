#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//day9







////day8
//typedef char BiElemType;
//typedef struct BiTNode {
//    BiElemType c;//c�����鼮�ϵ�data
//    struct BiTNode* lchild;
//    struct BiTNode* rchild;
//}BiTNode, * BiTree;
//
//typedef struct tag {
//    BiTree p;//����ĳһ�����ĵ�ֵַ
//    struct tag* pnext;
//}tag_t, * ptag_t;
//#define MaxSize 50
//typedef BiTree ElemType;
////���е�������ݽṹ
//typedef struct LinkNode {
//    ElemType data;
//    struct LinkNode* next;
//}LinkNode;
//typedef struct {
//    LinkNode* front, * rear;
//}LinkQueue;
//void InitQueue(LinkQueue& Q);
//bool IsEmpty(LinkQueue Q);
//void EnQueue(LinkQueue& Q, ElemType x);
//bool DeQueue(LinkQueue& Q, ElemType& x);
////��ͷ���Ķ���
//void InitQueue(LinkQueue& Q)
//{
//    Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
//    Q.front->next = NULL;
//}
//
//bool IsEmpty(LinkQueue Q)
//{
//    if (Q.front == Q.rear)
//        return true;
//    else
//        return false;
//}
//
//void EnQueue(LinkQueue& Q, ElemType x)
//{
//    LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//    s->data = x; s->next = NULL;
//    Q.rear->next = s;
//    Q.rear = s;
//}
//
//bool DeQueue(LinkQueue& Q, ElemType& x)
//{
//    if (Q.front == Q.rear) return false;
//    LinkNode* p = Q.front->next;//ͷ���ʲô��û�棬����ͷ������һ���ڵ��������
//    x = p->data;
//    Q.front->next = p->next;
//    if (Q.rear == p)
//        Q.rear = Q.front;
//    free(p);
//    return true;
//}
//
////�������  hdibjeafcg
//void InOrder(BiTree p)
//{
//    if (p != NULL)
//    {
//        InOrder(p->lchild);
//        putchar(p->c);
//        InOrder(p->rchild);
//    }
//}
////hidjebfgca  �������
//void PostOrder(BiTree p)
//{
//    if (p != NULL)
//    {
//        PostOrder(p->lchild);
//        PostOrder(p->rchild);
//        putchar(p->c);
//    }
//}
//
////��α���,���������������ȱ���
//void LevelOrder(BiTree T)
//{
//    LinkQueue Q;//��������
//    InitQueue(Q);//��ʼ������
//    BiTree p;
//    EnQueue(Q, T);//�������
//    while (!IsEmpty(Q))
//    {
//        DeQueue(Q, p);//���ӵ�ǰ��㲢��ӡ
//        putchar(p->c);
//        if (p->lchild != NULL) //�������
//            EnQueue(Q, p->lchild);
//        if (p->rchild != NULL)  //����Һ���
//            EnQueue(Q, p->rchild);
//    }
//}
//int main()
//{
//    BiTree pnew;
//    char c;
//    BiTree tree = NULL;//����
//    ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur = NULL;//phead���Ƕ���ͷ��ptail���Ƕ���β
//    //abcdefghij
//    while (scanf("%c", &c) != EOF)
//    {
//        if (c == '\n')
//        {
//            break;
//        }
//        pnew = (BiTree)calloc(1, sizeof(BiTNode));//calloc����ռ䲢�Կռ���г�ʼ������ֵΪ0
//        pnew->c = c;//���ݷŽ�ȥ
//        listpnew = (ptag_t)calloc(1, sizeof(tag_t));//�����н������ռ�
//        listpnew->p = pnew;
//        if (NULL == tree)
//        {
//            tree = pnew;//���ĸ�
//            phead = listpnew;//����ͷ
//            ptail = listpnew;//����β
//            pcur = listpnew;
//            continue;
//        }
//        else {
//            ptail->pnext = listpnew;//�½���������ͨ��β�巨
//            ptail = listpnew;//ptailָ�����β��
//        }//pcurʼ��ָ��Ҫ����Ľ���λ��
//        if (NULL == pcur->p->lchild)//��ΰ��½�������
//        {
//            pcur->p->lchild = pnew;//���½��ŵ�Ҫ����������
//        }
//        else if (NULL == pcur->p->rchild)
//        {
//            pcur->p->rchild = pnew;//���½��ŵ�Ҫ��������ұ�
//            pcur = pcur->pnext;//���Ҷ����˽���pcurָ����е���һ��
//        }
//    }
//    printf("\n");
//    printf("-----�������-----\n");//�ȴ�ӡ���ӣ���ӡ���ף���ӡ�Һ���
//    InOrder(tree);
//    printf("\n");
//    printf("-----�������-----\n");//�ȴ�ӡ���ӣ���ӡ�Һ��ӣ�����ӡ����
//    PostOrder(tree);
//    printf("\n");
//    printf("-----�������-----\n");
//    LevelOrder(tree);
//    return 0;
//}








////day7
////������ǰ�����
//typedef char BiElemType;
//typedef struct BiTNode {
//	BiElemType c;
//	struct BiTNode* lchild;
//	struct BiTNode* rchild;
//}BiTNode, * BiTree;
//
//typedef struct tag {
//	BiTree p;//����ĳһ�����ĵ�ֵַ
//	struct tag* pnext;
//}tag_t, * ptag_t;
//
//
//void pre0rder(BiTree p)
//{
//	if (p != NULL)
//	{
//		putchar(p->c);//�ȼ���visit����
//		pre0rder(p->lchild);
//		pre0rder(p->rchild);
//	}
//}
//
//int main()
//{
//	BiTree pnew;
//	char c;
//	BiTree tree = NULL;//����
//	ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur = NULL;//phead���Ƕ���ͷ��ptail���Ƕ���β
//	//abcdefj
//	while (scanf(" %c", &c) != EOF)// ע���������һ���ո񣬱�����һ������Ļ��з�Ӱ��
//	{
//		if (c == '\n')
//		{
//			break;
//		}
//		pnew = (BiTree)calloc(1, sizeof(BiTree));//calloc����ռ���г�ʼ������ֵΪ0
//		pnew->c = c;//���ݷŽ�ȥ
//		listpnew = (ptag_t)calloc(1, sizeof(BiTree));//�����н������ռ�
//		listpnew->p = pnew;
//		if (tree == NULL)
//		{
//			tree = pnew;//���ĸ�
//			phead = listpnew;//����ͷ
//			ptail = listpnew;//����β
//			pcur = listpnew;
//			continue;
//		}
//		else
//		{
//			ptail->pnext = listpnew;//�½���������ͨ��β�巨
//			ptail = listpnew;//ptailָ�����β��
//		}//pcurʼ��ָ��Ҫ�������λ��
//		if (pcur->p->lchild == NULL)//��ΰ��½�������
//		{
//			pcur->p->lchild = pnew;//���½��ŵ�Ҫ����������
//		}
//		else if (pcur->p->rchild == NULL)
//		{
//			pcur->p->rchild = pnew;//���½��ŵ�Ҫ��������ұ�
//			pcur = pcur->pnext;//���Ҷ����˽���pcurָ����е���һ��
//		}
//	}
//	printf("-----ǰ�����-----\n");//Ҳ������������ȴ�ӡ��ǰ��㣬��ӡ���ӣ���ӡ�Һ���
//	pre0rder(tree);
//	return 0;
//}







////day6
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






////day5
////���Ա����ʽ��ʾ��������
//typedef int ElemType;
////��̬����
//typedef struct LNode{
//	ElemType data;//��������飬������Ԫ��
//	struct LNode* next;//ָ����һ�����
//}LNode, * LinkList;
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
//	L = L->next;//��Lָ���һ�������ݵĽ��
//	while (L != NULL)
//	{
//		printf("%3d", L->data);//��ӡ��ǰ�������
//		L = L->next;//ָ����һ�����
//		if (L != NULL)
//		{
//			printf("");
//		}
//	}
//	printf("\n");
//}
//
////���Ա����ʽ��ʾ
//int main()
//{
//	LinkList L;//����ͷ���ǽṹ��ָ������
//	LinkList search;//�����洢�õ���ĳһ���ڵ�
//	CreatList2(L);//�������ݿ���Ϊ3 4 5 6 7 9999
//
//	search = GetElem(L, 2);
//	if (search != NULL)
//	{
//		printf("%d\n", search->data);
//	}
//
//	ListFrontInsert(L, 2 , 99);
//	PrintList(L);
//	ListDelete(L, 4);//ɾ����4�����
//	PrintList(L);
//	return 0;
//}








////day4
//
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
////��ӡ������ÿ���ڵ��ֵ
//void PrintList(LinkList L)
//{
//	L = L->next;//��Lָ���һ�������ݵĽ��
//	while (L != NULL)
//	{
//		printf("%d", L->data);//��ӡ��ǰ�������
//		L = L->next;//ָ����һ�����
//		if (L != NULL)
//		{
//			printf("");
//		}
//	}
//	printf("\n");
//}
//
////���Ա����ʽ��ʾ
//int main()
//{
//	LinkList L = NULL;//����ͷ���ǽṹ��ָ������
//	LinkList search;//�����洢�õ���ĳһ���ڵ�
//	CreatList1(L);//�������ݿ���Ϊ3 4 5 6 7 9999,ͷ�巨�½�����
//	PrintList(L);
//	CreatList2(L);
//	PrintList(L);
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