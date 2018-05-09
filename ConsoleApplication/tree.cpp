//树
//1、结点
//2、结点的度：结点拥有的子树个数或者分支的个数
//3、叶子结点
//4、深度

//存储结构
//1、顺序存储结构
//1.1、双亲存储结构
//2、链式存储结构


//二叉树定义
//1、结点的度只能是0、1、2
//2、子树有左右顺序之分


#include "stdafx.h"
#include "tree.h"

#include<iostream>  
using namespace std;

int treeDesc() {

	return 0;
}

//先序遍历
void preorder(BTNode *p) {
	if (p!=NULL)
	{
		//visit(p);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

//中序遍历
void inorder(BTNode *p) {
	if (p != NULL)
	{
		inorder(p->lchild);
		//visit(p);
		inorder(p->rchild);
	}
}

//后序遍历
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

//获取当前树结点深度
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

//先序法遍历查找第k个结点的值
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