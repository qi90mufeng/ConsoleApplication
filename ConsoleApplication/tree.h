#pragma once
#ifndef TREE_H    // ��ֹtree.h���ظ�����
#define TREE_H 

int treeDesc();

//��ʽ�洢�ṹ
struct BTNode{
	char data;

	struct BTNode *lchild;
	struct BTNode *rchild;
};
#endif  
