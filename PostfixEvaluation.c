//error
#include<stdio.h>
#include<ctype.h>
#define MAXSTACK 100
#define POSTFIX 100
int stack[MAXSTACK];
int top=-1;

int pop(){
    int item;
    if(top==-1){
        printf("underflow");
    }
    else{
        item=stack[top];
        top--;
        return item;
    }
}

void push(int item){
    if(top==MAXSTACK){
        printf("overflow");
    }
    else{
        top++;
        stack[top]=item;
    }
}

void evalpostfix(int postfix[]){
    int c;
    int a;
    int b;
    int v;
    int i=0;
   while(postfix[i]!=0){
       
       c=postfix[i];
       if(isdigit(c)){
           push(c);
       }
       else if(c=='+'||c=='-'||c=='*'||c=='/'){
           a=pop();
           b=pop();
           
           switch(c){
               case '+':v=a+b;
               break;
               
                case '-':v=a-b;
               break;
               
                case '*':v=a*b;
               break;
               
                case '/':v=a/b;
               break;
           }
           push(v);
       }i++;
   }printf("Result:%d",pop()); 
}



int main(){
    printf("enter the postfix expression:\n and press '0' to end the expression:\n");
    int  postfix[POSTFIX];
    int i=0;
    for(i=0;i<POSTFIX;i++){
        scanf("%d",&postfix[i]);
    
    if(postfix[i]==0){
        break;
    }
    }
    evalpostfix(postfix);
    
    return 0;
}
