#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

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





//���Ա����ʽ��ʾ
typedef int ElemType;
//��̬����
typedef struct LNode{
	ElemType data;//��������飬������Ԫ��
	struct LNode* next;//ָ����һ�����
}LNode, * LinkList;

//ͷ�巨�½�����
LinkList CreatList1(LinkList& L)//list_tail_insert
{
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;//L->data���û�Ŷ���
	scanf("%d", &x);//�ӱ�׼�����ȡ����
	//3 4 5 6 7 9999
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//����һ���¿ռ��s��ǿ������ת��
		s->data = x;//�Ѷ�ȡ����ֵ�����¿ռ��е�data��Ա
		s->next = L->next;//���½���nextָ��ָ������ĵ�һ��Ԫ�أ���һ�����������ݵ�Ԫ�أ�
		L->next = s;//��s��Ϊ��һ��Ԫ��
		scanf("%d", &x);//��ȡ��׼����
	}
	return L;
}

//β�巨�½�����
LinkList CreatList2(LinkList& L)//list_tail_insert
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//��ͷ�ڵ������
	LNode* s, * r = L;//LinkList s,r=L;Ҳ���ԣ�r���������β�ڵ㣬ָ������β��
	//3 4 5 6 7 9999
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r ->next = s;//��β�����ָ���½��
		r = s;//rָ���µı�β���
		scanf("%d", &x);
	}
	r->next = NULL;//β����nextָ�븳ֵΪNULL
	return L;
}

//����Ų��ҽ��ֵ
LinkList GetElem(LinkList L, int i)
{
	int j = 1;
	LinkList p = L->next;//��pָ���һ�����
	if (i == 0)
	{
		return L;//i����ͷ���ͷ���
	}
	if (i < 1)
	{
		return NULL;//i�Ǹ�ֵ�ͷ��ؿ�
	}
	while (p != NULL && j < i) 
	{
		p = p->next;//��pָ����һ�����
		j++;
	}
	return p;
}

//��ֵ����
LinkList LocateElem(LinkList L, ElemType e)
{
	LinkList p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;	
	}
	return p;
}

//�½������i��λ��
bool ListFrontInsert(LinkList L, int i, ElemType e)
{
	LinkList p = GetElem(L, i - 1);//�õ�Ҫ����λ�õ�ǰһ��λ�õĵ�ֵַ
	if (NULL == p)
	{
		return false;
	}
	LinkList s = (LNode*)malloc(sizeof(LNode));//���½������ռ�
	s->data = e;//Ҫ�����ֵ�����Ӧ�ռ�
	s->next = p->next;//����Ĳ���
	p->next = s;
	return true;
}

////ɾ����i�����
//bool ListDelete(LinkList L, int i)
//{
//
//}

//��ӡ������ÿ���ڵ��ֵ
void PrintList(LinkList L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%3d", L->data);//��ӡ��ǰ�������
		L = L->next;//ָ����һ�����
	}
	printf("\n");
}

//���Ա����ʽ��ʾ
int main()
{
	LinkList L;//����ͷ���ǽṹ��ָ������
	LinkList search;//�����洢�õ���ĳһ���ڵ�
	//CreatList1(L);//�������ݿ���Ϊ3 4 5 6 7 9999,ͷ�巨�½�����
	CreatList2(L);//�������ݿ���Ϊ3 4 5 6 7 9999
	PrintList(L);

	search = GetElem(L, 2);
	if (search != NULL)
	{
		printf("����Ų��ҳɹ�\n");
		printf("%d\n", search->data);
	}

	search = LocateElem(L, 6);//��ֵ��ѯ
	if (search != NULL)
	{
		printf("��ֵ���ҳɹ�\n");
		printf("%d\n", search->data);
	}

	ListFrontInsert(L, 2, 99);
	PrintList(L);
	//ListDelete(L, 4);//ɾ����4�����
	//PrintList(L);
	return 0;
}