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
		ST.elem[i] = rand() % 100;//生成的是0-99之间
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

//交换函数
void swap(ElemType& a, ElemType& b)
{
	ElemType tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//冒泡排序
void BubbleSort(ElemType A[], int n)
{
	int i, j;
	bool flag;
	for (i = 0; i < n - 1; i++)//i是控制多少个有序了
	{
		flag = 0;
		for (j = n - 1; j > i; j--)//内层控制比较，交换
		{
			if (A[j - 1] > A[j])
			{
				swap(A[j - 1], A[j]);
				flag = 1;
			}
		}
		if (flag == 0);
		{
			return;
		}

	}
}

//快速排序
int Partition(int* arr, int left, int right)
{
	int k, i;

	for (k = i = left; i < right; i++)
	{
		if (arr[i] < arr[right])
		{
			swap(arr[i], arr[k]);
			k++;
		}
	}
	swap(arr[k], arr[right]);
	return k;
}


//快排递归实现
void QuickSort(ElemType A[], int low, int high)
{
	if (low < high)
	{
		int pivotpos = Partition(A, low, high);//分割点左边元素都比分割点小，右边的比分割点大
		QuickSort(A, low, pivotpos - 1);
		QuickSort(A, pivotpos + 1, high);
	}
}

//冒泡排序与快速排序
int main()
{
	SSTable ST;
	ElemType A[10] = { 64,94,95,79,69,84,18,22,12,78 };
	ST_Init(ST, 10);//初始化
	//memcpy降低测试难度
	memcpy(ST.elem, A, sizeof(A));//内存copy接口，当你copy整形数组，或者浮点型时，要用memcpy
	ST_print(ST);
	BubbleSort(ST.elem, 10);//冒泡排序
	QuickSort(ST.elem, 0, 9);
	ST_print(ST);
	return 0;
}