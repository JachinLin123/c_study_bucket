//����ɾ��Ԫ��
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node { //node info
	int data;
	node* next;
};
void del(node* head, int x) {
	node* p = head->next;//�ӵ�һ���ڵ㿪ʼö��
	node* pre = head; //preʼ�ձ���p��ǰ���ڵ���Ϣ 
	while(p != NULL){
		if(p->data == x){//������ǡ��Ϊx��˵���պ�Ҫɾ���ýڵ� 
			pre->next = p->next;
			delete(p);
			p = pre->next;
		}else{//����λ����x,��pre��p������һλ 
			pre = p;
			p = p->next;
		}
	}
}

int main() {

	return 0;
}
