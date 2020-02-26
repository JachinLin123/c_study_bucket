//
// Created by Administrator on 2019/8/23.
//

#include <stdio.h>
#include <time.h>
int main(){
    int t1=clock();
    int m,n,x,y;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],b[n];
    for (int i = 0; i <n ; ++i) {
        scanf("%d",&x);
        a[i]=i+1;
    }
    for (int j = 0; j < m; ++j) {
        scanf("%d",&y);
        b[0]=y;
        int count=1;
        for (int i = 0; i < n; ++i) {
            if(a[i]!=b[0]&&i!=n){
                b[count]=a[i];
                count++;
            }
        }
        for (int k = 0; k <n ; ++k) {
            a[k]=b[k];
        }
    }
    for (int l = 0; l < n; ++l) {
        printf("%d ",b[l]);
    }
    int t2=clock();
    printf("%dms",t2-t1);
    return 0;
}