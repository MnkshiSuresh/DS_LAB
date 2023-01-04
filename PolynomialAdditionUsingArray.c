#include <stdio.h>
void read(int pol[],int deg){
    int i=0;
    for(i=deg;i>=0;i--){
        printf("coefficient of x^%d=",i);
        scanf("%d",&pol[i]);
    }
}

void display(int pol[],int deg){
    int i=0;
    for(i=deg;i>=0;i--){
         if(i!=deg){
             printf("+");}
         printf("%dx^%d",pol[i],i);
         }
    }

void main(){
    int pol1[100],pol2[100],polr[100],i=0,deg1,deg2,degr;
    printf("Enter the degree of first polynomial");
    scanf("%d",&deg1);
    printf("Enter the degree of second polynomial");
    scanf("%d",&deg2);
    printf("enter the coefficients of the polynomial 1:");
    read(pol1,deg1);
    printf("enter the coefficients of the polynomial 2:");
    read(pol2,deg2);
    
    if(deg1>deg2){
        degr=deg1;
    }
    else
    {
        degr=deg2;
    }
    for(i=0;i<=degr;i++){
        polr[i]=pol1[i]+pol2[i];
    }
    printf("first polynomial is:");
    display(pol1,deg1);
    printf("\n");
    printf("second polynomial is:");
    display(pol2,deg2);
    printf("\n");    
    printf("Resultant polynomial is:");
    display(polr,degr);
}
