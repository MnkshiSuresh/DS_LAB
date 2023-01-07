// Online C compiler to run C program online
#include <stdio.h>
void readmatrix(int a[100][100],int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void printmatrix(int a[100][100],int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        printf("\n");
        for(j=0;j<c;j++){
            printf("%d   ",a[i][j]);
        }
    }
}
void tuple(int a[100][100],int r,int c){
    int i,j,v=0;
    int t[100][100];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=0){
                v++;
                t[v][0]=i;
                t[v][1]=j;
                t[v][2]=a[i][j];
                
            }
        }
    }
    t[0][0]=r;
    t[0][1]=c;
    t[0][2]=v;
    printf("\nrow   column  value");
    int tr=v+1;
    int tc=3;
    
    for(i=0;i<tr;i++){
        printf("\n");
        for(j=0;j<tc;j++){
            printf("%d   ",t[i][j]);
        }
    }
    
}
int main() {
    int a[100][100],b[100][100],r1,r2,c1,c2;
    printf("enter the no of rows of m1:");
    scanf("%d",&r1);
    printf("enter the no of columns of m1:");
    scanf("%d",&c1);
    printf("enter the no of rows of m2:");
    scanf("%d",&r2);
    printf("enter the no of columns of m2:");
    scanf("%d",&c2);
    printf("enter the elements of m1");
    readmatrix(a,r1,c1);
    printf("enter the elements of m2");
    readmatrix(b,r2,c2);
    printf("the matrix m1:");
    printmatrix(a,r1,c1);
    printf("\nthe matrix m2:");
    printmatrix(b,r2,c2);
    printf("\nm1 in tuple form:");
    tuple(a,r1,c1);
    printf("\nm2 in tuple form:");
    tuple(b,r2,c2);
    return 0;
    
}
