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
void BubbleSort(int *a, int n){
    int count=0;
    for(int i = 0;i<n;i++){
        for(int j= 1;j<n-i;j++){
            if (a[j]<a[j-1]){
                swap(a,j-1,j);
                count++;
            }
        }
        if(count==0){
            break;
        }
        count=0;
    }
}

void main(){
    int arr[] = {20,34,53,3,4,224,5,56,345,60};
    int n =10;
    BubbleSort(arr,n);
    disp(arr,n);
}