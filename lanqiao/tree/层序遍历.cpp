//层序遍历
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

//基本的层序遍历 
void LayerOrder(node* root){
	queue<node*> q;//注意队列里面存放的是地址 
	q.push(root);//将根节点地址入队
	while(!q.empty()){
		node* now = q.front();
		q.pop();
		printf("%d\n", now->data);
		if(now->lchild != NULL) q.push(now->lchild);//左子树非空
		if(now->rchild != NULL) q.push(now->rchild);//右子树非空 
	} 
}


//如果题目要求计算出每个节点所处的层次，
//这时候就需要在二叉树节点的定义中添加一个记录 层次Layer的变量

struct node {
	int data;//数据域 
	int layer;//层次 
	node* lchild;//左指针域 
	node* rchild;//右指针域 
}; 

void LayerOrder(node* root){
	queue<node*> q;
	root->layer = 1;//根节点层次为一 
	q.push(root);//将根节点地址入队
	while(!q.empty()){
		node* now = q.front();
		q.pop();
		printf("%d ", now->data);
		if(now->lchild != NULL){//左子树非空 
			now->lchild->layer = now->layer + 1;//左孩子的层号为当前层号加1 
			q.push(now->lchild);
		}
		if(now->rchild != NULL){//右子树非空 
			now->rchild->layer = now->layer + 1;//右孩子的层号为当前层号 + 1 
			q.push(now->rchild);
		}
	} 
	
} 
 
int main(){
	return 0;
}
