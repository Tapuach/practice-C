#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include <function.h>

//�ݹ�ʵ��
//abdhiejcfg//ǰ�����(������ȱ�����
void pre0rder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//�ȼ���visit����
		pre0rder(p->lchild);
		pre0rder(p->rchild);
	}
}

//������� hdibjeafcg
void In0rder(BiTree p)
{
	if (p != NULL)
	{
		In0rder(p->lchild);
		putchar(p->c);
		In0rder(p->rchild);
	}
}

//hidjebfgca//��������
void Post0rder(BiTree p)
{
	if (p != NULL)
	{
		Post0rder(p->lchild);
		Post0rder(p->rchild);
		putchar(p->c);
	}
}

//��������ǵݹ飬�ǵݹ�ִ��Ч�ʸ��ߣ����ĸ��ʺܵ�
void In0rder2(BiTree T)
{
	SqStack S;
	InitStack(S); 
	BiTree p = T;
	while (p||!StackEmpty(S))//�߼���||
	{//����ѹջ�Ĺ����ҵ�������ߵ�����
		if (p)//��һ����㲻Ϊ�գ�ѹջ����ȡ����
		{
			Push(S, p);
			p = p->lchild;
		}
		else//����ջ��Ԫ�ز���ӡ����ȡ��ӡԪ�ص��ҽ��
		{
			Pop(S, p);
			putchar(p->c);
			p = p->lchild;
		}
	}
}

//���������������ȱ���
void Level0rder(BiTree T)
{
	LinkQueue Q;//��������
	InitQueue(Q);
	BiTree p;
	EnQueue(Q, T);//�������
	while (!IsEmpty(Q))
	{
		DeQueue(Q, p);//���ӵ�ǰ��㲢�Ҵ�ӡ
		putchar(p->c);
		if (p->lchild != NULL)//�������
		{
			EnQueue(Q, p->lchild);
		}
		if (p->rchild != NULL)//����Һ���
		{
			EnQueue(Q, p->rchild);
		}
	}
}

//�������Ľ�������ν�������ǰ�����򡢺������������ǵݹ��������α���
int main()
{
	BiTree pnew;
	int i, j, pos;
	char c;
	BiTree tree = NULL;//����
	ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur = NULL;//phead���Ƕ���ͷ��ptail���Ƕ���β
	//abcdefj
	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
		{
			break;
		}
		pnew = (BiTree)calloc(1, sizeof(BiTree));//calloc����ռ���г�ʼ������ֵΪ0
		pnew->c = c;//���ݷŽ�ȥ
		listpnew = (ptag_t)calloc(1, sizeof(BiTree));//�����н������ռ�
		listpnew->p = pnew;
		if (tree == NULL)
		{
			tree = pnew;//���ĸ�
			phead = listpnew;//����ͷ
			ptail = listpnew;//����β
			pcur = listpnew;
			continue;
		}
		else
		{
			ptail->pnext = listpnew;//�½���������ͨ��β�巨
			ptail = listpnew;//ptailָ�����β��
		}//pcurʼ��ָ��Ҫ�������λ��
		if (pcur->p->lchild == NULL)//��ΰ��½�������
		{
			pcur->p->lchild = pnew;//���½��ŵ�Ҫ����������
		}
		else if (pcur->p->rchild == NULL)
		{
			pcur->p->rchild = pnew;//���½��ŵ�Ҫ��������ұ�
			pcur = pcur->pnext;//���Ҷ����˽���pcurָ����е���һ��
		}
	}
	printf("-----ǰ�����-----\n");//Ҳ������������ȴ�ӡ��ǰ��㣬��ӡ���ӣ���ӡ�Һ���
	pre0rder(tree);
	printf("-----�������-----\n");//�ȴ�ӡ���ӣ���ӡ���ף���ӡ�Һ���
	In0rder(tree);
	printf("-----�������-----\n");//�ȴ�ӡ���ӣ���ӡ�Һ��ӣ�����ӡ����
	Post0rder(tree);
	printf("---��������ǵݹ�----\n");//��Ҫ�Ե�
	In0rder2(tree);
}
