#include<stdio.h>

void swap(int, int);

int main(void){
    int a = 21;
    int b = 17;

    swap(a, b);
    printf("main = %d\t b = %d\n", a, b);
    return 0;
}