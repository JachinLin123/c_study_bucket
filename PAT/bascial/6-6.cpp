//
// Created by Administrator on 2019/11/13.
//求单链表的阶乘和
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum( List L )
{
    int sum1 = 1, sum = 0;

    while (L != NULL)
    {
        for(int i = 0; i < L->Data; i++)
        {
            sum1 *= (i+1);
        }
        sum += sum1;
        L = L->Next;
        sum1 = 1;
    }
    return sum;
}

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* 你的代码将被嵌在这里 */

