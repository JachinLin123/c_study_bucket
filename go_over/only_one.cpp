//
// Created by Administrator on 2019/9/4.
//
/*
#include <stdio.h>

int main(void)
{
    int fahr,lower,upper;
    double celsius;
    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper: ");
    scanf("% d",&upper);
    printf("fahr celsius");
    for(fahr = lower;fahr <= upper;fahr++)
    {
        celsius = 5.0 / 9 * (fahr - 32.0);
        printf("% 3.0f %6.1f\n", fahr, celsius);
    }
    return 0;
}
 */
/*
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    float sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        sum=sum+float(i+1)/(2*i+1)*pow(-1,i);
    }
    printf("%6.3f\n",sum);
    return 0;
}
 */

/*
#include <stdio.h>
int main(void)
{
    double e,item;
    int n;
    printf("Input n:");
    scanf("%d",&n);
    e=1;
    for (int i = 1; i <= n; ++i) {
        item=1;
        for (int j = 1; j <= i; ++j) {
            item = item * j;
        }
            e=e+1.0/item;
    }
    printf("e=%.4f\n",e);
    return 0;
}
 */

/*
#include <stdio.h>

int main(void)
{
    int n = 10;
    float sum = 1,ret=1;
    for (int i = 1; i <= n ; ++i) {
        ret *= i;
        sum += 1.0/ret;
    }
    printf("%.4f\n",sum);
    return 0;
}
 */

/*
#include <stdio.h>
#include <time.h>

float fact(int n)
{
    if(n == 1)
    {
        return n;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main(void)
{
    time_t t1,t2;
    t1=clock();
    int n = 10;
    float sum=1;
    for (int i = 1; i <= n ; ++i) {
        sum += 1.0/fact(i);
    }
    printf("%.4f\n",sum);
    t2=clock();
    printf("%dms\n",t2-t1);
    return 0;
}
 */
