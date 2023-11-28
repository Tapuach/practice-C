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
		ST.elem[i] = rand() % 100;//���ɵ���0-99֮��
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

//��������
void swap(ElemType& a, ElemType& b)
{
	ElemType tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//ð������
void BubbleSort(ElemType A[], int n)
{
	int i, j;
	bool flag;
	for (i = 0; i < n - 1; i++)//i�ǿ��ƶ��ٸ�������
	{
		flag = 0;
		for (j = n - 1; j > i; j--)//�ڲ���ƱȽϣ�����
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

//��������
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


//���ŵݹ�ʵ��
void QuickSort(ElemType A[], int low, int high)
{
	if (low < high)
	{
		int pivotpos = Partition(A, low, high);//�ָ�����Ԫ�ض��ȷָ��С���ұߵıȷָ���
		QuickSort(A, low, pivotpos - 1);
		QuickSort(A, pivotpos + 1, high);
	}
}

//ð���������������
int main()
{
	SSTable ST;
	ElemType A[10] = { 64,94,95,79,69,84,18,22,12,78 };
	ST_Init(ST, 10);//��ʼ��
	//memcpy���Ͳ����Ѷ�
	memcpy(ST.elem, A, sizeof(A));//�ڴ�copy�ӿڣ�����copy�������飬���߸�����ʱ��Ҫ��memcpy
	ST_print(ST);
	BubbleSort(ST.elem, 10);//ð������
	QuickSort(ST.elem, 0, 9);
	ST_print(ST);
	return 0;
}