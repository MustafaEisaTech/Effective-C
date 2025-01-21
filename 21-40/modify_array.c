#include<stdio.h>

void modifyArray(int arr[], int size){
    for(int i; i < size; i++){
        arr[i] *= 2;
    }
}

int main(void){
    int arr[6] = {1, 2, 3, 4, 5, 6};

    modifyArray(arr, 6);
    for (int i = 0; i <6; i++ ){
        printf("%d", i);
    }
    return 0;
}