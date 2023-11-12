#pragma once

typedef char BiElemType;
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;

typedef struct tag {
	BiTree p;//����ĳһ�����ĵ�ֵַ
	struct tag* pnext;
}tag_t, * ptag_t;

//ջ��������ݽṹ
#define MaxSize 50
typedef BiTree ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;
void InitStack(SqStack& S);
bool StackEmpty(SqStack& S);
