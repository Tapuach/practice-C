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
	return true;
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
	ret = ListInsert(L,2,60);//���ڶ���λ�ò���60���Ԫ��
	if (ret)
	{
		printf("����ɹ�\n");
		//PrintList(L);
	}
	else
	{
		printf("����ʧ��������\n");
	}
	return 0;
}