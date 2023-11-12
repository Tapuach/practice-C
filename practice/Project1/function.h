#pragma once

typedef char BiElemType;
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;

typedef struct tag {
	BiTree p;//树的某一个结点的地址值
	struct tag* pnext;
}tag_t, * ptag_t;

//栈的相关数据结构
#define MaxSize 50
typedef BiTree ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;
void InitStack(SqStack& S);
bool StackEmpty(SqStack& S);
