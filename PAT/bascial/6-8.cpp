//
// Created by Administrator on 2019/11/13.
//

#include <stdio.h>

int Factorial( const int N )
{
    int sum;
    if(N >= 0) {
        sum = 1;
        for (int i = 0; i < N; ++i) {
            sum *= i + 1;
        }
    } else{
        sum = 0;
    }
    return sum;
}

int main()
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}
