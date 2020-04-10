//�������Ĵ洢�ṹ
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node {
	typename data;//������ 
	node* lchild;//ָ�����������ڵ��ָ�� 
	node* rchild;//ָ�����������ڵ��ָ�� 
};

node* root = NULL; 

//�½��ڵ�

//����һ���½ڵ㣬vΪ�ڵ�Ȩֵ 
node* newNode(int v){
	node* Node = new node;//����һ���ڵ�Ŀռ�
	Node->data = v;//�ڵ��ȨֵΪv
	Node->lchild = Node->rchild = NULL;
	return Node;
	 
} 
 
//�������Ĳ���

void search(node* root, int x, int newdata){
	if(root == NULL){
		return;//����������ͬ(�ݹ�߽�)
	}
	if(root->data == x){//�ҵ�������Ϊx�Ľڵ㣬�����޸�Ϊnewdata 
		root->data = newdata;
	}
	search(root->lchild, x, newdata);//������������x���ݹ�ʽ�� 
	search(root->rchild, x, newdata);//������������x���ݹ�ʽ�� 
} 
 
//�������Ĳ������
void insert(node* &root, int x){
	if(root == NULL){
		root = newNode(x);
		return;
	}
	if(�ɶ�����������,xӦ�ò��뵽������){
		insert(root->lchild, x);//������������,��ͬ 
		insert(root->rchild, x);
	}
} 

//�������Ĵ���
node* Create(int data[], int n){
	node* root = NULL;//�½��սڵ�root 
	for(int i = 0; i < n; i++){//��data[0]~data[n-1]���뵽�������� 
		insert(root, data[i]);
	}
	return root;//���ظ��ڵ� 
} 
 
//�������

void preorder(node* root){
	if(root == NULL){
		return;//������Ϊ�գ�ֱ�ӷ��� 
	}
	//���ʸ��ڵ�root,���罫�����������
	printf("%d\n", root->data);
	//����������
	preorder(root->lchild);
	//����������
	preorder(root->rchild); 
} 

//�������

void inorder(node* node){
	if(root == NULL){
		return;//��������ݹ�߽� 
	}
	//����������
	inorder(root->lchild)
	//���ʸ��ڵ�root�����罫�����������
	printf("%d\n",root->data);
	//����������
	inorder(root->rchild); 
} 

//�������

void postorder(node* root){
	if(root == NULL){
		return;//�ݹ�߽� 
	}
	//���������� 
	postorder(root->lchild);
	//���������� 
	postorder(root->rchild);
	//��ӡ���ڵ� 
	printf("%d\n", root->data);
} 
 
int main() {

	return 0;
} 
