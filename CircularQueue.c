#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cqueue[20];
int rear=-1,front=-1;

void dequeue(){
    int temp;
    if(front==-1){
        printf("empty queue");
    }
    else if(front==rear){
    printf("%d has been deleted",cqueue[front]);}
    else{
        cqueue[front]=temp;
        front++;
        printf("%d has been deleted",temp);
    }
}

void enqueue(int n){
    if(rear==front-1){
        printf("complete queue\n");
    }
    else if(front==-1){
        front++;rear++;cqueue[rear]=n;
    }
    else{
        
        rear++;
        cqueue[rear]=n;
    }
}

void display(){
    if(front==-1){
        printf("empty queue\n");
    }
    else{
        for(int i=front;i<=rear;i++){
        printf("%d\n",cqueue[i]);
    }}
}

void firstelem(){
    if(front==-1){
        printf("empty queue\n");
    }
    else{
        printf("Front elem:%d\n",cqueue[front]);
    }
}

void lastelem(){
     if(front==-1){
        printf("empty queue\n");
    }
     else{
        printf("Last elem:%d\n",cqueue[rear]);
    }
}


int main(){
    while(true){
        int c,n;
        printf("---------------QUEUE--------------\n");
        printf("1.ENQUEUE:\n2.DEQUEUE:\n3.DISPLAY:\n4.PRINT THE FIRST ELEM\n5.PRINT THE LAST ELEM\n6.EXIT\n");
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
            firstelem();
            break;
            
            case 5:
            lastelem();
            break;
            
            case 6:
            exit(0);
        }
    }
    return 0;
    
}
