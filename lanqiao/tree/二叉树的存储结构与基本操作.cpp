//二叉树的存储结构
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node {
	typename data;//数据域 
	node* lchild;//指向左子树根节点的指针 
	node* rchild;//指向右子树根节点的指针 
};

node* root = NULL; 

//新建节点

//生成一个新节点，v为节点权值 
node* newNode(int v){
	node* Node = new node;//申请一个节点的空间
	Node->data = v;//节点的权值为v
	Node->lchild = Node->rchild = NULL;
	return Node;
	 
} 
 
//二叉树的查找

void search(node* root, int x, int newdata){
	if(root == NULL){
		return;//空树，死胡同(递归边界)
	}
	if(root->data == x){//找到数据域为x的节点，把它修改为newdata 
		root->data = newdata;
	}
	search(root->lchild, x, newdata);//往左子树搜索x（递归式） 
	search(root->rchild, x, newdata);//往右子树搜索x（递归式） 
} 
 
//二叉树的插入操作
void insert(node* &root, int x){
	if(root == NULL){
		root = newNode(x);
		return;
	}
	if(由二叉树的性质,x应该插入到左子树){
		insert(root->lchild, x);//往左子树搜索,下同 
		insert(root->rchild, x);
	}
} 

//二叉树的创建
node* Create(int data[], int n){
	node* root = NULL;//新建空节点root 
	for(int i = 0; i < n; i++){//将data[0]~data[n-1]插入到二叉树中 
		insert(root, data[i]);
	}
	return root;//返回根节点 
} 
 
//先序遍历

void preorder(node* root){
	if(root == NULL){
		return;//二叉树为空，直接返回 
	}
	//访问根节点root,例如将其数据域输出
	printf("%d\n", root->data);
	//访问左子树
	preorder(root->lchild);
	//访问右子树
	preorder(root->rchild); 
} 

//中序遍历

void inorder(node* node){
	if(root == NULL){
		return;//到达空树递归边界 
	}
	//访问左子树
	inorder(root->lchild)
	//访问根节点root，例如将其数据域输出
	printf("%d\n",root->data);
	//访问右子树
	inorder(root->rchild); 
} 

//后序遍历

void postorder(node* root){
	if(root == NULL){
		return;//递归边界 
	}
	//访问左子树 
	postorder(root->lchild);
	//访问右子树 
	postorder(root->rchild);
	//打印根节点 
	printf("%d\n", root->data);
} 
 
int main() {

	return 0;
} 
