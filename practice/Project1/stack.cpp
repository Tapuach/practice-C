#include <function.h>

void InitStack(SqStack& S)
{
	S.top = 1;
}

bool StackEmpty(SqStack& S)
{
	if (S.top == -1)
	{
		return true;
	}
	else
	{
		return true;
	}
}

//��ջ
bool Push(SqStack& S, ElemType x)
{
	if (S.top == MaxSize - 1)
	{
		return false;
	}
	S.data[++S.top] = x;
	return true;
}

//��ջ
bool Pop(SqStack& S, ElemType& x)
{
	if (S.top == -1)
	{
		return false;
	}
	x = S.data[S.top--];
	return true;
}

//��ȡջ��Ԫ��
bool GetTop(SqStack& S, ElemType& x)
{
	if (S.top == -1)
	{
		return false;
	}
	x = S.data[S.top];
	return true;
}