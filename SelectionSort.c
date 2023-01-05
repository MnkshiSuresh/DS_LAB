#include<stdio.h>
void SelectionSort(int b[],int x){
    int i,j,min,pos;
    for(i=0;i<x-1;i++){
        pos=i;
        for(j=i+1;j<x;j++){
            if(b[j]<b[i]){
                pos=j;
            }
        }
       if(pos!=i){
           min=b[i];
           b[i]=b[pos];
           b[pos]=min;
        }     
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
    SelectionSort(a,n);
    printf("sorted list");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
}
