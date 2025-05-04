//
// Created by 31646 on 25-5-4.
//
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void menu();
void game();

int main() {
    int input =0;
    srand((unsigned int )time (NULL));
    do {
        menu();
        printf("please choose\n");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
            break;
            case 0:
                printf("game ending\n");
            break;
            default:
                printf("please choose again\n");
            break;

        }
    }while(input);


    return 0;
}
