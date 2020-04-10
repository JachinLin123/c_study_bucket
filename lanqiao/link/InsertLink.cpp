//链表插入元素
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
	node* q = new node;//新建节点
	q->data = x;//新建节点的数据域为x 
	q->next = p->next;//新节点的下一个节点指向原先插入位置的节点 
	p->next = q; //前一个位置的节点指向新节点 
}

int main() {

	return 0;
}
