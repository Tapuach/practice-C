#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef struct BSTNode {
	KeyType key;
	struct BSTNode* lchild, * rchild;
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
		return 0; // 发现相同元素，就不插入
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

//书上没有二叉排序树删除代码
void DeleteNode(BiTree& root, KeyType x) {
	if (root == NULL)
	{
		return;
	}
	if (root->key > x) {
		DeleteNode(root->lchild, x);
	}
	else if (root->key < x) {
		DeleteNode(root->rchild, x);
	}
	else {//查找到了删除结点
		if (root->lchild == NULL) {//左子树为空，右子树直接顶上去
			BiTree tempNode = root;//用临时的存着的目的是一会要free
			root = root->rchild;
			free(tempNode);
		}
		else if (root->rchild == NULL) {//右子树为空，左指数直接顶上去
			BiTree tempNdoe = root;//临时指针
			root = root->lchild;
			free(tempNdoe);
		}
		else {	//左右子树都不为空
				//一般的删除策略都是左子树的最大数据 或 右子树的最小数据 代替要删除的结点（这里采用查找左子树最大数据来代替）
			BiTree tempNode = root->lchild;
			if (tempNode->rchild != NULL) {
				tempNode = tempNode->lchild;
			}
			root->key = tempNode->key;
			DeleteNode(root->lchild,tempNode->key);
		}
	}
}

//创建二叉排序树
void Creat_BST(BiTree& T, KeyType str[], int n)
{
	T = NULL;
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
	In0rder(T);
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
	In0rder(T);
	printf("\n");
	return 0;
}