#include<stdio.h>
void disp(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void swap(int *a,int x, int y){
    int temp = a[x];
    a[x]=a[y];
    a[y]=temp;
}
void InsertionSort(int *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(a[j--]>a[j]){
                swap(a,j,j-1);
            }
            else{
                break;
            }
        }
    }
}

void main(){
    int arr[] = {20,34,53,3,4,224,5,56,345,60};
    int n =10;
    InsertionSort(arr,n);
    disp(arr,n);
}