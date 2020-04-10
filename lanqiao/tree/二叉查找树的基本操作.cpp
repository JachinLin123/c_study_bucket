//������������
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//search�������Ҷ����������������Ϊx�Ľڵ�

void search(node* root, int x) {
	if(root == NULL) {//����������ʧ��
		printf("search failed!\n");
		return;
	}
	if(x == root->data) {//���ҳɹ��������֮
		printf("%d\n", root->data);
	} else if(x < root->data) {//���x�ȸ��ڵ�������С��˵��x��������
		search(root->lchild, x);//������������
	} else {//���x�ȸ��ڵ���������˵��x��������
		search(root->rchild, x);//������������
	}
}

//insert�������ڶ������в���һ��������Ϊx���½ڵ�(ע�����rootҪ������ )

void insert(node* &root, int x) {
	if(root == NULL) { //����˵������ʧ�ܣ�Ҳ���ǲ���λ��
		root = newNode(x);//�½��ڵ㣬ȨֵΪx
		return;
	}
	if(x == root->data) { //���ҳɹ���˵���ڵ��Ѿ����ڣ�ֱ�ӷ���
		return;
	} else if(x < root->data) { //���x�ȸ��ڵ��������С��˵��x��Ҫ������������
		insert(root->lchild, x);//������������x
	} else {
		insert(root->rchild, x);//������������
	}
}

//����������Ľ���
node* Create(int data[], int n) {
	node* root = NULL;//�½����ڵ�
	for(int i = 0; i < n; i++) {
		insert(root->lchild, data[i]);//��data[0]~data[n-1]���뵽���������
	}

	return root;//���ظ��ڵ�
}

//Ѱ����rootΪ���ڵ�����е����Ȩֵ�ڵ�

node* findMax(node* root) {
	while(root->rchild != NULL) {
		root = root->rchild;	//�������ң�ֱ��û���Һ���
	}
	return root;
}

//Ѱ����rootΪ���ڵ�����е���СȨֵ�ڵ�

node* findMin(node* root) {
	while(root->lchild != NULL) {
		root = root->lchild;//��������ֱ��û������
	}
	return root;
}
