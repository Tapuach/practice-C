#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <function.h>

//�ݹ�ʵ��
//abdhiejcfg
void pre0rder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//�ȼ���visit����
		pre0rder(p->lchild);
		pre0rder(p->rchild);
	}
}


//�������Ľ�������ν�������ǰ�����򡢺������������ǵݹ��������α���
int mian()
{
	BiTree pnew;
	int i, j, pos;
	char c;
	BiTree tree = NULL;//����
	ptag_t phead = NULL, ptail = NULL, listpnew, pcur;//phead���Ƕ���ͷ��ptail���Ƕ���β
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
	printf("-----ǰ�����-----\n");
	pre0rder(tree);
}
