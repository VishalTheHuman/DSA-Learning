#include<stdio.h>
void disp(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int SmallestElement(int *a, int i,int n){
    int small = i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[small]){
            small = j;
        }
    }
    return small;
}
void swap(int *a,int x, int y){
    int temp = a[x];
    a[x]=a[y];
    a[y]=temp;
}
void SelectionSort(int *a, int n){
    for(int i = 0;i<n-1;i++){
        int j = SmallestElement(a,i,n);
        swap(a,i,j);
    }

}

void main(){
    int arr[] = {20,34,53,3,4,224,5,56,345,60};
    int n =10;
    SelectionSort(arr,n);
    disp(arr,n);
}