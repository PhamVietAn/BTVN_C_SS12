#include<stdio.h>

int finfMax(int arr[], int size){
int max=arr[0];
for(int i=1; i<size; i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}

int main(){
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    int max=finfMax(arr, n);
    printf("so lon nhat trong mang la: %d\n", max);

    return 0;
}