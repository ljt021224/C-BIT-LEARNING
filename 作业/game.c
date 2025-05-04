#include <stdio.h>
//
// Created by 31646 on 25-5-4.
//
void game() {
    int r = rand()%100+1;
    int guess = 0;
    int count =5;
    while (count) {
        printf("please guess number: \n");
        scanf("%d", &guess);
        if (guess < r)
            printf("to small\n");
        else if (guess > r)
            printf("too big\n");
        else {
            printf("you are right the num is %d\n", r);
            break;
        }



        count--;

    }
    if (count == 0) {
        printf("you lose the game ,the right num is%d\n" , r);
    }
}

void menu() {
        printf("**************************\n");
        printf("******  1. play  *********\n");
        printf("******  0. exit  *********\n");
        printf("**************************\n");

    }

