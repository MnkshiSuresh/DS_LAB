#include<stdio.h>
struct poly{
        int c;
        int e;
        
    }p1[10],p2[10],p3[10];

int read(struct poly p[10]){
    printf("enter the no of terms:");
    int n,i=0;
    scanf("%d",&n);
    printf("enter the coefficients:");
    for(i=0;i<n;i++){
        scanf("%d",&p[i].c);
    }
    printf("enter the exponents:");
    for(i=0;i<n;i++){
        scanf("%d",&p[i].e);
    }
    return n;
    
}

int display(struct poly p[10],int n){
    printf("the polynomial is:");
    for(int i=0;i<n-1;i++){
        printf("%d.x^%d + ",p[i].c,p[i].e);
    }
    printf(" %d.x^%d",p[n-1].c,p[n-1].e);
    
}

int add(struct poly p1[10],int n1,struct poly p2[10],int n2,struct poly p3[10]){
    int j=0,i=0,k=0;
    while(i<n1 && j<n2){
        if(p1[i].e==p2[j].e){
            p3[k].c=p1[i].c+p2[j].c;
            p3[k].e=p1[i].e;
            i++;
            k++;
            j++;
        }
        else if(p1[i].e>p2[j].e){
            p3[k].c=p1[i].c;
            p3[k].e=p1[i].e;
            i++;
            k++;
        }
        else{
            p3[k].c=p2[j].c;
            p3[k].e=p2[j].e;
            k++;
            j++;
        }
    }
    while(i<n1){
         p3[k].c=p1[i].c;
            p3[k].e=p1[i].e;
            i++;
            k++;
    }
    while(j<n2){
       p3[k].c=p2[j].c;
            p3[k].e=p2[j].e;
            k++;
            j++; 
    }
    return k;
}
int main(){
    
    int n1,n2,n3;
    n1=read(p1);
    display(p1,n1);
    printf("\n");
    n2=read(p2);
    display(p2,n2);
    printf("\n");
    n3=add(p1,n1,p2,n2,p3);
    display(p3,n3);
    printf("\n");
    
}
