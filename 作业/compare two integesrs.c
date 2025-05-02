//
// Created by 31646 on 25-4-5.
//
#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {  // keep reading pairs until end of input
        if (a > b) {
            printf("%d>%d\n", a, b);
        } else if (a < b) {
            printf("%d<%d\n", a, b);
        } else {
            printf("%d=%d\n", a, b);
        }
    }
    return 0;
}

