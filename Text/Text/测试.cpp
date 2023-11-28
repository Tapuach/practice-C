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
	ST.TableLen = len + 1;//ʵ������11��Ԫ�صĿռ�
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i;
	srand(time(NULL));
	for (i = 0; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand() % 100;//�����11���������ǵ�һ��Ԫ����û���õ���
	}
}

void ST_print(SSTable ST)
{
	for (int i = 0; i < ST.TableLen; i++)
	{
		printf("%3d", ST.elem[i]);
	}
	printf("\n");
}

//�������򣬴�С������������
void InsertSort(ElemType A[], int n)
{
	int i, j;
	//24 66 94 2 15 74 28 51 22 18 2
	for (i = 2; i <= n; i++)//��0��Ԫ�����ڱ�������������
	{						//�ӵڶ���Ԫ�ؿ�ʼ�ã���ǰ�����
		if (A[i] < A[i - 1])
		{
			A[0] = A[i];//�ŵ��ݴ棨�ڱ���
			for (j = i - 1; A[0] < A[j]; --j)//�ƶ�Ԫ�أ��ڲ�ѭ���������������е�
											//ÿһ��Ԫ�غ�Ҫ�����Ԫ�رȽ�
			{
				A[j + 1] = A[j];
			}
			A[j + 1] = A[0];//���ݴ�Ԫ�ز��뵽��Ӧλ��
		}
	}
}