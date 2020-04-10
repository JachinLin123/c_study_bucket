// @author JachinLin
// Created on 2020-03-15-14:19.
//

#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {//链表节点
    int data;
    node *next;
};

node* Create(int Array[]) {
    node *p, *pre, *head;//pre保留当前节点的前驱节点，head为头结点
    head = new node;//创建头节点
    head->next = NULL;//头结点不需要数据域，指针域初始为null
    pre = head;//记录pre为head
    for (int i = 0; i < 5; ++i) {
        p = new node;//新建节点
        //将Array[i]赋值给新建的节点作为数据域， 也可以scanf输入
        p->data = Array[i];
        p->next = NULL;//新节点的指针域设置为null
        pre->next = p;//前驱节点的指针域设为当前新建节点的地址
        pre = p;//pre设置为p，作为下一个节点的前驱节点
    }
    return head;
}

int main() {
    int Array[5] = {5, 3, 6, 1, 2};
    node* L = Create(Array);
    L = L->next;
    while(L != NULL){
        printf("%d ", L->data);//输出每一个节点的数据域
        L = L->next;
    }
    return 0;
}