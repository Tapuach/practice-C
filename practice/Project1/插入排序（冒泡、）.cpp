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
	ST.TableLen = len;
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i;
	srand(time(NULL));//随机数生成，每一次执行代码生成不同数据
	for (i = 0; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand() % 100;
	}
 }

void ST_print(SSTable ST)
{

}

//冒泡排序与快速排序
int main()
{
	SSTable ST;
	ElemType A[10] = { 64,94,95,79,69,84,18,22,12,78 };
	ST_Init(ST, 10);//初始化
	memcpy(ST.elem, A, sizeof(A));
	ST_print(ST);
	BubbleSort(ST.elem, 10);//冒泡排序
	ST_print(ST);
	return 0;
}