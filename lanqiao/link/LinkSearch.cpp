//�������Ԫ��
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node { //node info
	int data;
	node* next;
};
int search(node* head, int x) {
	int count = 0;
	node* p = head->next;
	while(p != NULL) {
		if(p->data == x) {
			count++;//��ǰ�ڵ�������Ϊx 
		}
		p = p->next;//ָ���Ƶ���һ���ڵ� 
	}
	return count; 
}

int main() {

	return 0;
}
