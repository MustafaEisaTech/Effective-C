#include<stdio.h>

int j; //file scope

void f(int i){ // block scope of i starts
    int j = 1; // block scope of J begins, hides the file scope or declaration of J
    i++;       // the function's parameter

    for(i = 0; i<2; i++){ // block scope of local i for the loop starts
        int j = 2;        // block scope of inner J hides the outer scope of J
        printf("%d\n", j);// inner J is in the scope it's going to print 2
    }

    printf("%d\n", j);    // the outer J is in scope prints 1
}

void g(int j);            // J has a function prototype, hides the file scope of J
