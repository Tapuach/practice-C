#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef int ElemType;
typedef struct {
	ElemType* elem;//�洢Ԫ�ص���ʼ��ַ
	int TableLen;//Ԫ�ظ���
}SSTable;


void ST_Init(SSTable& ST, int len)
{
	ST.TableLen = len;
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i;
	srand(time(NULL));//��������ɣ�ÿһ��ִ�д������ɲ�ͬ����
	for (i = 0; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand() % 100;
	}
 }

void ST_print(SSTable ST)
{

}

//ð���������������
int main()
{
	SSTable ST;
	ElemType A[10] = { 64,94,95,79,69,84,18,22,12,78 };
	ST_Init(ST, 10);//��ʼ��
	memcpy(ST.elem, A, sizeof(A));
	ST_print(ST);
	BubbleSort(ST.elem, 10);//ð������
	ST_print(ST);
	return 0;
}