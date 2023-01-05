#include<stdio.h>
void insertionsort(int b[],int x){
    int i,j,min;
    for(i=0;i<x;i++){
        min=b[i];
        j=i-1;
        while(b[j]>min&&j>=0){
            b[j+1]=b[j];
            j=j-1;
            
        }
        b[j+1]=min;
    }
}
int main(){
    int n,i;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    insertionsort(a,n);
    printf("sorted list");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
}
