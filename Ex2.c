#include<stdio.h>

void printfArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("phan tu thu %d la: %d \n", i+1, arr[i]);
    }
}

int main(){
    int number[]={24,30,8,6,17,18,19};
    int size=sizeof(number)/sizeof(number[0]);
    printfArray(number,size);
    return 0;
}