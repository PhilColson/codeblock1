#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__
#include <functional>
#include <iostream>
#include "BinaryTreeNode.h"
#include "../file/FileManager.h"
using namespace std;

class BinarySearchTree
{
public:
	BinarySearchTree():root(nullptr){}

	void preorder(const function<void(BinarySearchTreeNode*)>& func = 
		[](BinarySearchTreeNode* node){cout << node->key <<","<< node->value << "\n";});

	void inorder(const function<void(BinarySearchTreeNode*)>& func = 
		[](BinarySearchTreeNode* node){cout << node->key << "," << node->value << "\n"; });

	void postorder(const function<void(BinarySearchTreeNode*)>& func = 
		[](BinarySearchTreeNode* node){cout << node->key << "," << node->value << "\n"; });

	void put(const int val,const int value);

	BinarySearchTreeNode* getRawPtr(const int val);

	int get(const int val);

	void remove(const int val);

	void writeAllNodeToDisk();

	void initFileManager(string FileName);

	void readAllNodeFromDisk();
private:
	FileManager<BinarySearchTreeNodeBase> fileManager;
	BinarySearchTreeNode* root;
};

#endif//__BINARYTREENODE_H__
