//�������Ԫ��
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node { //node info
	int data;
	node* next;
};
void insert(node* head, int pos, int x) {
	node* p = head;
	for(int i = 0; i < pos - 1; i++){
		p = p->next;//pos-1 is in order to insert the element to pre
	}
	node* q = new node;//�½��ڵ�
	q->data = x;//�½��ڵ��������Ϊx 
	q->next = p->next;//�½ڵ����һ���ڵ�ָ��ԭ�Ȳ���λ�õĽڵ� 
	p->next = q; //ǰһ��λ�õĽڵ�ָ���½ڵ� 
}

int main() {

	return 0;
}
