#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int queue[20];
int rear=-1,front=-1;

void dequeue(){
    int temp;
    if(front==-1){
        printf("empty queue");
    }
    else{
        queue[front]=temp;
        front++;
        printf("%d has been deleted",temp);
    }
}

void enqueue(int n){
    if(rear>=20){
        printf("complete queue\n");
    }
    else if(front==-1){
        front++;rear++;queue[rear]=n;
    }
    else{
        rear++;
        queue[rear]=n;
    }
}

void display(){
    if(front==-1){
        printf("empty queue\n");
    }
    else{
        for(int i=0;i<=rear;i++){
        printf("%d\n",queue[i]);
    }}
}


int main(){
    while(true){
        int c,n;
        printf("---------------QUEUE--------------\n");
        printf("1.ENQUEUE:\n2.DEQUEUE:\n3.DISPLAY:\n4.EXIT\n");
        printf("enter your choice:\n");
        scanf("%d",&c);
        switch(c){
            case 1:
            printf("enter the value to be added:\n");
            scanf("%d",&n);
            enqueue(n);
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
        }
    }
    return 0;
    
}
