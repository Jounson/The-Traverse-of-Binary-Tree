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
	/* top�ĳ�ʼλ��Ϊ0����ջ��ʱ��Ԫ�س��ȵ���top������λ�� */
	return s->_len == s->_top;
}
bool isStackEmpty(Stack* s)
{
	/* ��top�α�����ʱ��ջΪ�� */
	return s->_top == 0;
}
void push(Stack* s, BinaryTreeNode* ch)
{
	///* �Ȱ�����ѹ��ջ�� */
	//s->_space[s->_top] = ch;
	///* �ڰ�top�α�����һ��λ�� */
	//s->_top++;

	/* ����������϶�Ϊһ */
	s->_space[s->_top++] = ch;
}
BinaryTreeNode* pop(Stack* s)
{
	/* �Ƚ�top��ֵ��һ���ٽ�top��һǰ�Ǹ�λ�õ�ֵȡ���� */
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