#include<stdio.h>
void main(){
    int Array[]={4,3,1,5};
    int tmp;
    for(int i = 0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if (Array[j]<Array[i]){
                tmp=Array[i];
                Array[i]=Array[j];
                Array[j]=tmp;
            }
        }
    }
    for(int i=0;i<4;i++){
        printf("%d ",Array[i]);
    }
}