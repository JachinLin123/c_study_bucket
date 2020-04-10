//�������
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

//�����Ĳ������ 
void LayerOrder(node* root){
	queue<node*> q;//ע����������ŵ��ǵ�ַ 
	q.push(root);//�����ڵ��ַ���
	while(!q.empty()){
		node* now = q.front();
		q.pop();
		printf("%d\n", now->data);
		if(now->lchild != NULL) q.push(now->lchild);//�������ǿ�
		if(now->rchild != NULL) q.push(now->rchild);//�������ǿ� 
	} 
}


//�����ĿҪ������ÿ���ڵ������Ĳ�Σ�
//��ʱ�����Ҫ�ڶ������ڵ�Ķ��������һ����¼ ���Layer�ı���

struct node {
	int data;//������ 
	int layer;//��� 
	node* lchild;//��ָ���� 
	node* rchild;//��ָ���� 
}; 

void LayerOrder(node* root){
	queue<node*> q;
	root->layer = 1;//���ڵ���Ϊһ 
	q.push(root);//�����ڵ��ַ���
	while(!q.empty()){
		node* now = q.front();
		q.pop();
		printf("%d ", now->data);
		if(now->lchild != NULL){//�������ǿ� 
			now->lchild->layer = now->layer + 1;//���ӵĲ��Ϊ��ǰ��ż�1 
			q.push(now->lchild);
		}
		if(now->rchild != NULL){//�������ǿ� 
			now->rchild->layer = now->layer + 1;//�Һ��ӵĲ��Ϊ��ǰ��� + 1 
			q.push(now->rchild);
		}
	} 
	
} 
 
int main(){
	return 0;
}
