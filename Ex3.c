#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if(num>0){
        printf("Giai thua cua %d la: %d\n", num, factorial(num));
    }else{
        printf("Khong co giai thua");
    }
}