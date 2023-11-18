#include <function.h>

//带头结点的队列
void InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear=(LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}

bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void EnQueue(LinkQueue& Q, ElemType x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x; 
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	if (Q.front == Q.rear)
	{
		return false;//队列为空
	}
	LinkNode* p = Q.front->next;//头结点什么都没存，所以头结点的下一个结点才有数据
	x = p->data;
	Q.front->next = p->next;//断链
	if (Q.rear == p)//删除的是最后一个元素
	{
		Q.rear = Q.front;//队列置为空
	}
	free(p);
	return true;
}