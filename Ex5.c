#include <stdio.h>
#include <math.h>

int prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num1, num2;

    printf("nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    if(prime(num1)) {
        printf("%d la so nguyen to\n", num1);
    }else{
        printf("%d khong phai so nguyen to\n", num1);
    }

    if(prime(num2)){
        printf("%d la so nguyen to\n", num2);
    }else{
        printf("%d khong phai so nguyen to\n", num2);
    }

    return 0;
}
