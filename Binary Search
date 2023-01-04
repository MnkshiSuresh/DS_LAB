#include <stdio.h>
int main() {
   int n,temp,i,j;
   printf("enter the no of elements:");
   scanf("%d",&n);
   int array[n];
   printf("Enter the elements:");
   
   for(i=0;i<n;i++){
       scanf("%d",&array[i]);
   }
   
   printf("Sorted array will be:");
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if(array[i]>array[j]){
               temp=array[i];
               array[i]=array[j];
               array[j]=temp;
           }
       }
   }
    for(i=0;i<n;i++){
        printf("\n%d",array[i]);
    }   
    int middle,first=0,last=n-1,x;
    printf("enter the no to be searched:");
    scanf("%d",&x);
   
    middle=(first+last);
    while(first<last){
        if(x<array[middle]){
        last=middle-1;
    }
    else if (array[middle] == x) {
         printf("%d found at location %d",x, middle+1);
         break;}
    else{
        first=middle+1;
    }
    middle=(first+last)/2;
    }
    if(first>last){
    printf("Not found");
}
}
