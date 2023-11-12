#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <function.h>

//递归实现
//abdhiejcfg
void pre0rder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//等价于visit函数
		pre0rder(p->lchild);
		pre0rder(p->rchild);
	}
}


//二叉树的建树（层次建树），前序、中序、后序遍历、中序非递归遍历、层次遍历
int mian()
{
	BiTree pnew;
	int i, j, pos;
	char c;
	BiTree tree = NULL;//树根
	ptag_t phead = NULL, ptail = NULL, listpnew, pcur;//phead就是队列头，ptail就是队列尾
	//abcdefj
	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
		{
			break;
		}
		pnew = (BiTree)calloc(1, sizeof(BiTree));//calloc申请空间进行初始化，赋值为0
		pnew->c = c;//数据放进去
		listpnew = (ptag_t)calloc(1, sizeof(BiTree));//给队列结点申请空间
		listpnew->p = pnew;
		if (tree == NULL)
		{
			tree = pnew;//树的根
			phead = listpnew;//队列头
			ptail = listpnew;//队列尾
			pcur = listpnew;
			continue;
		}
		else
		{
			ptail->pnext = listpnew;//新结点放入链表，通过尾插法
			ptail = listpnew;//ptail指向队列尾部
		}//pcur始终指向要插入结点的位置
		if (pcur->p->lchild == NULL)//如何把新结点放入树
		{
			pcur->p->lchild = pnew;//把新结点放到要插入结点的左边
		}
		else if (pcur->p->rchild == NULL)
		{
			pcur->p->rchild = pnew;//把新结点放到要插入结点的右边
			pcur = pcur->pnext;//左右都放了结点后，pcur指向队列的下一个
		}
	}
	printf("-----前序遍历-----\n");
	pre0rder(tree);
}
