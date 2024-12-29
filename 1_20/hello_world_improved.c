// checks if the int returned by puts is EOF or not
#include<stdio.h>
#include<stdlib.h>

// EOF or end of file is a macro that holds a negative value for exit falure code
// EOF indicates a write error
int main(void){
    if(puts("Hello, world!") == EOF){
        return EXIT_FAILURE;
        //the code here doesn't get executed
    }
    return EXIT_SUCCESS;
    // the code here doesn't get executed
}