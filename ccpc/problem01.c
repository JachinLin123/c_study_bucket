//
// Created by Administrator on 2019/8/23.
//
#include <stdio.h>
#include <math.h>
#include <time.h>
long long int gcd(long long int a,long long int b)
{
    while(a != b)
    {
        if(a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}


int main() {
    time_t t1,t2;
    t1=clock();
    long long int n,a,b;
    long long int xx = pow(10, 9) - 7;
    int T;
    scanf("%d",&T);
    long long int sum=0,result[T];
    for (int k=0;k<T;k++) {
        scanf("%lld", &n);
        scanf("%lld", &a);
        scanf("%lld", &b);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (gcd(i, j) != 1) {
                    sum = sum;
                } else {
                    sum = sum+ gcd(pow(i, a) - pow(j, a), pow(i, b) - pow(j, b)) % (xx);
                }
            }
        }
        result[k]=sum;
    }
    for (int l = 0; l <T; l++) {
        printf("%lld\n", result[l]);
    }
    t2=clock();
    printf("%dms",t2-t1);
    return 0;
}
