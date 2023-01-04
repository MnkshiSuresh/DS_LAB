#include<stdio.h>
int main(){
    int n,i,x,flag;
    printf("enter the the no of elements in the array:");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&x);
    
    flag=0;
    for(i=0;i<n;i++){
    if(array[i]==x){
        flag=1;
        printf("element found at position:%d",i);
        break;
      }
    }
     if(flag==0){
         printf("element not found");
     
    }
    return 0;
}
