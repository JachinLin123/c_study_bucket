//
// Created by Administrator on 2019/8/23.
//
#include <stdio.h>
#include <math.h>

int main(){
    char k1[2][2]={'C','C','P','C'};
    int T,k;
    scanf("%d",&T);
   for (int i = 0; i <T ; ++i) {
        scanf("%d",&k);
        if(k==1){
            for (int j = 0; j <pow(2,1) ; ++j) {
                for (int l = 0; l < pow(2,1); ++l) {
                    printf("%c",k1[j][l]);
                    if(l%(int)pow(2,k)==0&&i!=0){
                        printf("\n");
                    }
                }
            }
        } else{

        }
    }
    return 0;
}
