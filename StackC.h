#pragma once
#ifndef _STACKC_H_
#define _STACKC_H_
#include<stdbool.h>

typedef struct _BinaryTreeNode
{
	int _data;
	struct _BinaryTreeNode* _left;
	struct _BinaryTreeNode* _right;
}BinaryTreeNode;
typedef struct _Stack
{
	int _len;
	int _top;
	BinaryTreeNode** _space;
}Stack;
void initStack(Stack* s,int size);
bool isStackFull(Stack* s);
bool isStackEmpty(Stack* s);
void push(Stack* s, BinaryTreeNode* ch);
BinaryTreeNode* pop(Stack* s);
void clearStack(Stack* s);
void resetStack(Stack* s);




#endif
