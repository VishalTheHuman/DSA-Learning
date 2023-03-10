#include<stdio.h>
void swap(int *a,int x,int y){
    int tmp=a[x];
    a[x]=a[y];
    a[y]=tmp;
}
void display(int *a,int n){
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void SelectionSort(int *a, int n){
    for(int i =0;i<n-1;i++){
        int temp=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[temp]){
                temp=j;
            }
        }
        swap(a,i,temp);
    }
}
int main(){
    int a[]= {3,768,4,6879,15,8,47,5,32,61};
    SelectionSort(a,10);
    display(a,10);
}
/*
void swap(int *a,int x,int y){
    int tmp=a[x];
    a[x]=a[y];
    a[y]=tmp;
}

void display(int *a,int n){
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int locsmall(int *a, int n,int k){
    int small=k;
    for(int i=1+k;i<n;i++){
        if(a[small]>a[i]){
            small=i;
        }
    }
    return small;
}
#include<stdio.h>
void main(){
    int Array[]={2,3,4,5,6,23,2,10,1,2};
    int n=10;
    int tmp;
    for(int i = 0;i<n;i++){
        swap(Array,i,locsmall(Array,n,i));
    }
    for(int i=0;i<n;i++){
        printf("%d ",Array[i]);
    }
}*/