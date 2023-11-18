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
	{	//Ϊ�½ڵ�����ռ䣬��һ�������Ϊ����
		T = (BiTree)malloc(sizeof(BSTNode));
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;//�������ɹ�
	}
	else if (k == T->key)
		terurn 0; // ������ͬԪ�أ��Ͳ�����
	else if (k < T->key)//���Ҫ����Ľ�㣬С�ڵ�ǰ���
	{
		return BST_Insert(T->lchild,k);//�������ý��������Ӻ�ԭ���ĸ��׻����
	}
	else
	{
		return BST_Insert(T->lchild,k);
	}
		
}

//�ݹ��㷨�򵥣�����ִ��Ч�ʵ�
BSTNode* BST_Search(BiTree T, KeyType key, BiTree& p)
{
	p = NULL;//�洢Ҫ�ҵĽ��ĸ���
	while (T != NULL && key != T->key)
	{
		p = T;
		if (key < T->key)T = T->lchild;//�ȵ�ǰ���С���������
		else T = T->rchild;//�ȵ�ǰ�����ұ�ȥ
	}
	return T;
}

//����û�ж���������ɾ��
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

//��������������
void Creat_BST(BiTree& T, KeyType str[], int n)
{
	T = NULLL;
	int i = 0;
	while (i < n)
	{
		BST_Insert(T, str[i]);//��ĳһ����������������
		i++;
	}
}


int main()
{
	BiTree T = NULL;//����
	BiTree parent;//�洢���׽��ĵ�ֵַ
	BiTree search;
	KeyType str[] = { 54,20,66,40,28,79,58 };//��Ҫ���������������Ԫ��ֵ
	Creat_BST(T, str, 7);
	Inorder(T);
	printf("\n");
	search = BST_Search(T, 40, parent);
	if (search)
	{
		printf("�ҵ���Ӧ�ڵ㣬ֵ=%d\n", search->key);
	}
	else
	{
		printf("δ�ҵ���Ӧ���\n");//û�ҵ���search����NULL
	}
	DeleteNode(T, 66);//ɾ��ĳ�����
	InOrder(T);
	printf("\n");
	return 0;
}