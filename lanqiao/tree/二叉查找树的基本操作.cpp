//二叉树查找树
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//search函数查找二插查找树中数据域为x的节点

void search(node* root, int x) {
	if(root == NULL) {//空树，查找失败
		printf("search failed!\n");
		return;
	}
	if(x == root->data) {//查找成功，则访问之
		printf("%d\n", root->data);
	} else if(x < root->data) {//如果x比根节点数据域小，说明x在左子树
		search(root->lchild, x);//往左子树搜索
	} else {//如果x比根节点的数据域大，说明x在右子树
		search(root->rchild, x);//往右子树搜索
	}
}

//insert函数将在二叉树中插入一个数据域为x的新节点(注意参数root要加引用 )

void insert(node* &root, int x) {
	if(root == NULL) { //空树说明查找失败，也即是插入位置
		root = newNode(x);//新建节点，权值为x
		return;
	}
	if(x == root->data) { //查找成功，说明节点已经存在，直接返回
		return;
	} else if(x < root->data) { //如果x比根节点的数据域小，说明x需要插入在左子树
		insert(root->lchild, x);//往左子树搜索x
	} else {
		insert(root->rchild, x);//往右子树搜索
	}
}

//二插查找树的建立
node* Create(int data[], int n) {
	node* root = NULL;//新建根节点
	for(int i = 0; i < n; i++) {
		insert(root->lchild, data[i]);//将data[0]~data[n-1]插入到二叉查找树
	}

	return root;//返回根节点
}

//寻找以root为根节点的树中的最大权值节点

node* findMax(node* root) {
	while(root->rchild != NULL) {
		root = root->rchild;	//不断往右，直到没有右孩子
	}
	return root;
}

//寻找以root为根节点的树中的最小权值节点

node* findMin(node* root) {
	while(root->lchild != NULL) {
		root = root->lchild;//不断往左，直到没有左孩子
	}
	return root;
}
