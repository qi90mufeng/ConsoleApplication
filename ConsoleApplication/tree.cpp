//��
//1�����
//2�����Ķȣ����ӵ�е������������߷�֧�ĸ���
//3��Ҷ�ӽ��
//4�����

//�洢�ṹ
//1��˳��洢�ṹ
//1.1��˫�״洢�ṹ
//2����ʽ�洢�ṹ


//����������
//1�����Ķ�ֻ����0��1��2
//2������������˳��֮��


#include "stdafx.h"
#include "tree.h"

#include<iostream>  
using namespace std;

int treeDesc() {

	return 0;
}

//�������
void preorder(BTNode *p) {
	if (p!=NULL)
	{
		//visit(p);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

//�������
void inorder(BTNode *p) {
	if (p != NULL)
	{
		inorder(p->lchild);
		//visit(p);
		inorder(p->rchild);
	}
}

//�������
void postorder(BTNode *p) {
	if (p != NULL)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		//visit(p);
	}
}

void visit(BTNode *p) {
	cout << p->data << endl;
}

//��ȡ��ǰ��������
int getDepth(BTNode *p) {
	int LD, RD;
	if (p == NULL)
	{
		return 0;
	}
	else {
		LD = getDepth(p->lchild);
		RD = getDepth(p->rchild);
		return (LD > RD ? LD : RD) + 1;
	}
}

//���򷨱������ҵ�k������ֵ
int n = 0;
void getk(BTNode *p, int k) {
	if (p != NULL)
	{
		n++;
		if (n == k) {
			cout << p->data << endl;
			return;
		}
		getk(p->lchild, k);
		getk(p->rchild, k);
	}
}