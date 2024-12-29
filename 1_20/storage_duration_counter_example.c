// this is an example of the static modifier and how it can be used to extend the life time of a variable

#include<stdio.h>

void increment(void){
    static unsigned int counter = 0;
    counter++;
    printf("%d", counter);
}

int main(void){
    for (int i = 0; i < 5; i++)
    {
        increment();
    }
    return 0;   
    
}

// STATIC VALUES MUST BE DECLARED WITH A CONSTANT VALUE AND NOT A VARIABLE:

int *func(int i){
    const int j = i; //ok
    static int k = j; //error
    return &k;
}