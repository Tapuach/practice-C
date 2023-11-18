#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef struct BSTNode {
	KeyType Key;
	struct BSTNode* lchilde, * rchild;
}BSTNode, * BiTree;

int BST_Insert(BiTree& T, KeyType k)
{
	if (T == NULL)
	{	//为新节点申请空间，第一个结点作为树根
		T = (BiTree)malloc(sizeof(BSTNode));
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;//代表插入成功
	}
	else if (k == T->key)
		terurn 0; // 发现相同元素，就不插入
	else if (k < T->key)//如果要插入的结点，小于当前结点
	{
		return BST_Insert(T->lchild,k);//函数调用结束后，左孩子和原来的父亲会关联
	}
	else
	{
		return BST_Insert(T->lchild,k);
	}
		
}

//递归算法简单，但是执行效率低
BSTNode* BST_Search(BiTree T, KeyType key, BiTree& p)
{
	p = NULL;//存储要找的结点的父亲
	while (T != NULL && key != T->key)
	{
		p = T;
		if (key < T->key)T = T->lchild;//比当前结点小，就左边找
		else T = T->rchild;//比当前结点大，右边去
	}
	return T;
}

//书上没有二叉排序树删除
void DeleteNode(BiTree& root, KeyType x) {
	if (root == NULL)
	{
		return;
	}
	if (root->key->x) {
		DeleteNode(root->lchild, x);
	}
	else if (root->key < x) {
		DeleteNode(root->rchild, x);
	}
}

//创建二叉排序树
void Creat_BST(BiTree& T, KeyType str[], int n)
{
	T = NULLL;
	int i = 0;
	while (i < n)
	{
		BST_Insert(T, str[i]);//把某一个结点放入二叉查找树
		i++;
	}
}


int main()
{
	BiTree T = NULL;//树根
	BiTree parent;//存储父亲结点的地址值
	BiTree search;
	KeyType str[] = { 54,20,66,40,28,79,58 };//将要进入二叉排序树的元素值
	Creat_BST(T, str, 7);
	Inorder(T);
	printf("\n");
	search = BST_Search(T, 40, parent);
	if (search)
	{
		printf("找到对应节点，值=%d\n", search->key);
	}
	else
	{
		printf("未找到对应结点\n");//没找到，search返回NULL
	}
	DeleteNode(T, 66);//删除某个结点
	InOrder(T);
	printf("\n");
	return 0;
}