//
// Created by Administrator on 2019/11/13.
//

#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N )
{
    int a[10]={10},n = N,s[11] = {0},t=1,i;
    int p = sqrt(N);
    if(N < 10)
        return 0;
    if(p*p == N)
    {
        while(n>9)
        {
            a[t] = n%10;
            n = n/10;
            t++;//算一共多少位数。
        }
        a[t]=n;//因为当n从while循环出来时，这个n没有进数组。
        for(i = 1; i <= t; i++)
        {
            int x = a[i];
            s[x]++;
            if(s[x] >= 2)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}