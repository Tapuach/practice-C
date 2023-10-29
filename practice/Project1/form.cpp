#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;
//��̬����
typedef struct {
	ElemType data[MaxSize];//��������飬������Ԫ��
	int length;//��ǰ˳������ж��ٸ�Ԫ��
}SqList;

//i��������λ�ã���1��ʼ��e��Ҫ�����Ԫ��
bool ListInsert(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)//�ж�Ҫ�����λ���Ƿ�Ϸ�
		return false;
	if (L.length > MaxSize)//�ж�Ԫ���Ƿ����
		return false;
	for (int j = L.length; j >= i; j--)//�ƶ�˳����е�Ԫ��,���������ƶ�
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;
	L.length++;
	return true;//�ߵ�����������ɹ�������true
}

//ɾ��ʹ��Ԫ��e�����õ�Ŀ�����ó���Ӧ��ֵ
bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length)//���ɾ��λ�ò��Ϸ�
		return false;
	if (L.length == 0)//˳�����û�г�������ɾ��
		return false;
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++)//��i��λ�ð�Ԫ��������ǰ����
		L.data[j - 1] = L.data[j];
	L.length--;//ɾ��һ��Ԫ��˳����ȼ�һ
	return true;
}

//���ҳɹ�������λ�ã�λ�ô�1��ʼ������ʧ�ܣ�����0
int LocateElem(SqList L, ElemType e)
{
	int i;
	for(i=0;i<L.length;i++)//����˳���
		if (L.data[i] == e)
		{
			return i + 1;//(i+1)����Ԫ����˳����е�λ��
		}
	return 0;
}

//��ӡ˳���
void PrintList(SqList& L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);//Ҫ������Ԫ�ش�ӡ��һ��
	}
	printf("\n");
}


int main()
{
	SqList L;//˳��������
	bool ret;//�鿴����ֵ����������ֻ����true������false
	ElemType del;//�����洢Ҫɾ����Ԫ��
	
	//�����ֶ���˳����и�ֵ
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;//�ܼ�����Ԫ��
	
	//����
	ret = ListInsert(L,2,60);//���ڶ���λ�ò���60���Ԫ��
	if (ret)
	{
		printf("����ɹ�\n");
		PrintList(L);//��ӡ�ɹ����˳���
	}
	else
	{
		printf("����ʧ��������\n");
	}

	//ɾ��
	ret = ListDelete(L, 1, del);//ɾ����һ��λ�õ�Ԫ�ز���Ԫ��ֵ���
	if (ret)
	{
		printf("ɾ���ɹ�\n");
		printf("ɾ����Ԫ��ֵΪ %d\n", del);
		PrintList(L);
	}
	else
	{
		printf("ɾ��ʧ��\n");
	}

	//����
	int elem_pos;
	elem_pos = LocateElem(L, 60);
	if (elem_pos)
	{
		printf("���ҳɹ�\n");
		printf("Ԫ��λ��Ϊ %d\n", elem_pos);//��ӡԪ��λ��
	}
	else
	{
		printf("����ʧ��\n");
	}
	return 0;
}