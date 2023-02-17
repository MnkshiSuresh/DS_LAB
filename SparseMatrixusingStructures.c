#include<stdio.h>
typedef struct matrix{
    int row;
    int column;
    int value;
}matrix;
int main(){
    int i,j,m,n,a[100][100];
    matrix k[100];
    printf("enter the details of the matrix:\n");
    printf("enter the no of rows:\n");
    scanf("%d",&n);
    printf("enter the no of columns:\n");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
    
    k[0].row=n;
    k[0].column=m;
    int numofzeroes=0,c=1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]!=0){
                k[c].row=i;
                k[c].column=j;
                k[c].value=a[i][j];
                c++;
            }
            if(a[i][j]==0){
                numofzeroes++;
            }
        }
    }
    k[0].value=c;
    printf("The new sparse matrix represented in tuple form:\n\n");
    for(i=0;i<c;i++){
        printf("Row:%d  column:%d  value:%d   \n",k[i].row,k[i].column,k[i].value);
    }
    printf("Sparsity of the matrix is %d/%d",numofzeroes,(n*m));
    
}
