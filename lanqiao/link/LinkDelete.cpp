//链表删除元素
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node { //node info
	int data;
	node* next;
};
void del(node* head, int x) {
	node* p = head->next;//从第一个节点开始枚举
	node* pre = head; //pre始终保持p的前驱节点信息 
	while(p != NULL){
		if(p->data == x){//数据域恰好为x，说明刚好要删除该节点 
			pre->next = p->next;
			delete(p);
			p = pre->next;
		}else{//数据位不是x,把pre和p都后移一位 
			pre = p;
			p = p->next;
		}
	}
}

int main() {

	return 0;
}
