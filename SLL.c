#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*first=NULL,*last=NULL,*temp=NULL,*prev=NULL,*trav=NULL;

void create(){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data part:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    
    if(first==NULL){
        first=temp;
        last=temp;
    }
    else{
        last->link=temp;
        last=temp;
    }
}

void display(){
    
        temp=first;
        while(temp!=NULL){
            printf("\n%d",temp->data);
            temp=temp->link;
        }
       
            printf("\nNULL");
        
    }
void insert_beg(){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data part:");
    scanf("%d",&temp->data);
    temp->link=NULL;
   
    if(first==NULL){
        first=temp;
        last=temp;
    }
    else{
        temp->link=first;
        first=temp;
    }
}
void insert_end(){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data part:");
    scanf("%d",&temp->data);
    temp->link=NULL;
   
    if(first==NULL){
        first=temp;
        last=temp;
    }
    else{
        last->link=temp;
        last=temp;
    }
}

void insert_btw(){
    int pos,i=0;
    printf("enter the position where inserted");
    scanf("%d",&pos);
      if(pos==0){
          insert_beg();
      }
      else{
          prev=NULL;
          trav=first;
          for(i=0;i<pos;i++){
              prev=trav;
              trav=trav->link;
      }
      if(trav==NULL){
          insert_end();
      }
      else{
           temp=(struct node*)malloc(sizeof(struct node));
           printf("enter the data part:");
           scanf("%d",&temp->data);
           temp->link=NULL;
           prev->link=temp;
           temp->link=trav;
      }
      }
}

void delete_beg(){
    if(first==NULL){
        printf("NULL");
    }
    else{
        trav=first;
        first=first->link;
        trav->link=NULL;
        free(trav);
    }
}

void delete_end(){
    if(first==NULL){
        printf("NULL");
    }
    else{
        prev=NULL;
        trav=first;
        while(trav->link!=NULL){
            prev=trav;
            trav=trav->link;
        }
        prev->link=NULL;
        last=prev;
        free(trav);
    }
}

void delete_btw(){
    int pos,i=0;
    printf("enter the pos from which to delete");
    scanf("%d",&pos);
    if(pos==0){
        delete_beg();
    }
    else{
        prev=NULL;
        trav=first;
        for(i=0;i<pos;i++){
            prev=trav;
            trav=trav->link;
        }
        if(trav==NULL){
            delete_end();
        }
        else{
            prev->link=trav->link;
            free(trav);
        }
    }
}
    
int main(){
    int ch;
    do{
         printf("\n1.create\n2.display\n3.insert at beg\n4.insert at end\n5.insert in betw position\n6.delete from beg\n7.delete from end\n8.delete from betw position\n9.exit");
         printf("\nenter your choice:");
         scanf("%d",&ch);
         switch(ch){
            case 1:create();
                    break;
            case 2:display();
                    break;
            case 3:insert_beg();
                    break;
            case 4:insert_end();
                    break;
            case 5:insert_btw();
                    break;
            case 6:delete_beg();
                    break;
            case 7:delete_end();
                    break;
            case 8:delete_btw();
                    break;
            case 9:exit(0);
                 }
    }while(1);
   return 0;
}
