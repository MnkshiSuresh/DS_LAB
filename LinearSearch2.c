#include <stdio.h>
int linearsearch(int a[],int n,int c){
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]==c){
            k=1;
            break;
        }
        else{
        k=0;}
    }
    return k;
}
int main(){
    int n,c;
    printf("enter the number of elem:");
    scanf("%d",&n);
    printf("enter the serach elem:");
    scanf("%d",&c);
    int a[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=linearsearch(a,n,c);
    if(k==1){
        printf("yes");
    }else{
    printf("no");}
    return 0;
}
