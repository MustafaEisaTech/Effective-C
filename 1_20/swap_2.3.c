#include<stdio.h>

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("swap a = %d\t b = %d\n",a ,b );
    
}

int main(void){
    int a = 21;
    int b = 17;

    swap(&a, &b);
    printf("main a = %d\t, b = %d\n", a, b);
    return 0;
}
// pointers in this program basically access the locations of the already declared variables and modifies them based on the function
// C is a call by value langauge so calling without using pointers would just creat a copy of the variable in the memory