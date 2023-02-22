//error
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define size 100
char stack[size];
int top=-1;

void push(char item){
    if(top>=size-1){
        printf("stack overflow");
    }
    else{
        top++;
        stack[top]==item;
    }
}

char pop(){
    char item;
    if(top<0){
        printf("stack underflow");
        getchar();
        exit(1);
    }
    else{
        item=stack[top];
        top--;
        return(item);
    }
}



int isoperator(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'){
        return 1;
    }
    else{
        return 0;
    }
}

int precedence(char c){
    if(c=='*' || c=='/'){
        return(2);
    }
   else if(c=='+'||c=='-'){
        return(1);
    }
    else{
        return(0);
    }
}

void infixtopostfix(char infix[],char postfix[]){
    char x;
    int i=0,j=0;
    push('(');
    strcat(infix,")");
    char item=infix[i];
    while(item!='\0'){
        
         if(item=='('){
            push(item);
        }
        else if(isdigit(item)||isalpha(item)){
            postfix[j]=item;
            j++;
        }
        else if(isoperator(item)==1){
            x=pop();
            while(isoperator(x)==1 && precedence(x)>=precedence(item)){
                postfix[j]=x;
                j++;
                x=pop();
            }
            push(x);
            push(item);
        }
        else if(item==')'){
            x=pop();
            while(x!='('){
                postfix[j]=x;
                j++;
                x=pop();
            }
        }
        else{
            printf("invalid expression");
            getchar();
            exit(1);
        }
        i++;
        item=infix[i];
    }
    if(top>0){
        printf("invalid expression");
        getchar();
        exit(1);
    }
    postfix[j]='\0';
}

int main(){
    char postfix[size];
    char infix[size];;
    printf("enter the infix expression");
    scanf("%s",infix);
    printf("the corrosponding postfix expression is:\n");
    infixtopostfix(infix,postfix);
    puts(postfix);
    return 0;
}
