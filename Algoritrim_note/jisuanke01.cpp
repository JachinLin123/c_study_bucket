//
// Created by Administrator on 2020/2/18.
//

#include <stdio.h>
#include <math.h>

int main() {
    int x = 0, y = 0, z = 0, min = 10000;
    for (int i = 1; i < 1000; ++i) {
        for (int j = 1; j < 1000; ++j) {
            for (int k = 1; k < 1000; ++k) {
                if (i + k + j <= min && 11 * i + 13 * j + 17 * k == 2471 && 13 * i + 17 * j + k * 11 == 2739)
                    min = i + j + k;
            }
        }
    }
    printf("%d\n",
            // 在下方填入答案
           min
    );
    return 0;
}