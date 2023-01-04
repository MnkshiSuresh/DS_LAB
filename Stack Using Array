#include <stdio.h>
#include <stdlib.h>
#define size 10
int stack[size];
int top=-1;

int stackfull(){
    if(top>=size-1)
    return 1;
    else
    return 0;
}

int stackempty(){
    if(top==-1)
    return 1;
    else
    return 0;
}

void push(int n){
    top++;
    stack[top]=n;
    
    
}

int pop(){
    int n;
    n=stack[top];
    top--;
    return(n);
    
}

void display(){
    if(stackempty()){
        printf("stack is empty!");
    }
    else{
    for(int i=top;i>-1;i--){
        printf("\n%d",stack[i]);
    }
}
}

int main(){
    int ch,n;
    printf("-----------------IMPLEMENTATION OF STACK USING ARRAY-------------------\n");
    do {
        printf(" 1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
    
switch (ch) {
case 1:
    printf("\nEnter The item to be pushed :: ");
    scanf("%d", &n);

    if (stackfull())
        printf("\npush operation cannot be performed because stack is full");
    else
        push(n);
    break;
case 2:
    if (stackempty())
        printf("\npop operation cannot be performed because stack is empty");
    else {
        n = pop();
        printf("\nThe popped element is %d", n);
}
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
}
} while (1);
return 0;
}
