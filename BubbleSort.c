#include<stdio.h>
int main(){
    int n,i,exchange=1;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    
    for(i=0;i<(n-1)&&exchange;i++){
        for(int j=0,exchange=0;j<n-i-1;j++){
            int temp;
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            exchange=1;
            }
        }
    }
    printf("Sorted list:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}
