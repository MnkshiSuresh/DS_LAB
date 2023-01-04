#include<stdio.h>
int main(){
    int array[50],n,i,j,temp,exchange=1;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i< (n-1)&&exchange;i++){
        for(j=0,exchange=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+i];
                array[j+1]=temp;
                exchange=1;
            }
        }
    }
    printf("the sorted array is:");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}
