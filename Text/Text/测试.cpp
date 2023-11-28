#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef int ElemType;
typedef struct {
	ElemType* elem;//存储元素的起始地址
	int TableLen;//元素个数
}SSTable;

void ST_Init(SSTable& ST, int len)
{
	ST.TableLen = len + 1;//实际申请11个元素的空间
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i;
	srand(time(NULL));
	for (i = 0; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand() % 100;//随机了11个数，但是第一个元素是没有用到的
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

//插入排序，从小到大排序，升序
void InsertSort(ElemType A[], int n)
{
	int i, j;
	//24 66 94 2 15 74 28 51 22 18 2
	for (i = 2; i <= n; i++)//第0个元素是哨兵，不参与排序
	{						//从第二个元素开始拿，往前面插入
		if (A[i] < A[i - 1])
		{
			A[0] = A[i];//放到暂存（哨兵）
			for (j = i - 1; A[0] < A[j]; --j)//移动元素，内层循环控制有序序列中的
											//每一个元素和要插入的元素比较
			{
				A[j + 1] = A[j];
			}
			A[j + 1] = A[0];//把暂存元素插入到对应位置
		}
	}
}