#include <stdio.h>

int main() {
    float a = 0, b = 0;
    float odd = 0, even = 0;

    for (a = 1; a < 100; a += 2) {
        odd += 1.0 / a;
    }

    for (b = 2; b <= 100; b += 2) {
        even += -1.0 / b;
    }

    printf("Sum = %f\n", even + odd);
    return 0;
}
//alternative code with one for-loop

#include<stdio.h>

int main() {
    float sum =0;
    int num =0;
    for (num =1 ; num<= 100; num++) {
        if (num %2 != 0) {
            sum = sum + 1.0/num;
        }else {
            sum = sum - 1.0/num;
        }
    }
    printf("The sum is %f",sum);
    return 0;
}
