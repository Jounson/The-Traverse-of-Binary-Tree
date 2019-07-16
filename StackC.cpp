#include"pch.h"
#include"StackC.h"
#include<stdbool.h>
#include<stdlib.h>

void initStack(Stack* s,int size)
{
	s->_top = 0;
	s->_len = size;
	s->_space = (BinaryTreeNode**)malloc(sizeof(BinaryTreeNode*)*s->_len);
}
bool isStackFull(Stack* s)
{
	/* top的初始位置为0，当栈满时，元素长度等于top所处的位置 */
	return s->_len == s->_top;
}
bool isStackEmpty(Stack* s)
{
	/* 当top游标在零时，栈为空 */
	return s->_top == 0;
}
void push(Stack* s, BinaryTreeNode* ch)
{
	///* 先把数据压入栈中 */
	//s->_space[s->_top] = ch;
	///* 在把top游标上移一个位置 */
	//s->_top++;

	/* 将上述两句合二为一 */
	s->_space[s->_top++] = ch;
}
BinaryTreeNode* pop(Stack* s)
{
	/* 先将top的值减一，再将top减一前那个位置的值取出来 */
	return s->_space[--s->_top];
}
void clearStack(Stack* s)
{
	free(s->_space);
}
void resetStack(Stack* s)
{
	s->_top = 0;
}