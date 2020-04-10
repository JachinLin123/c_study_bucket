//链表查找元素
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
			count++;//当前节点数据域为x 
		}
		p = p->next;//指针移到下一个节点 
	}
	return count; 
}

int main() {

	return 0;
}
