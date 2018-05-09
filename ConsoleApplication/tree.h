#pragma once
#ifndef TREE_H    // 防止tree.h被重复引用
#define TREE_H 

int treeDesc();

//链式存储结构
struct BTNode{
	char data;

	struct BTNode *lchild;
	struct BTNode *rchild;
};
#endif  
