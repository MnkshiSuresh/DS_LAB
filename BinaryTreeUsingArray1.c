#include<stdio.h>
int complete_node=15;
char tree[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '\0', '\0', 'J', '\0', 'K', 'L'};
int get_left_child(int index){
    if(tree[index]!='\0'&&(index*2+1)<=complete_node){
        return (index*2)+1;
        return -1;
    }
}
int get_right_child(int index){
    if(tree[index]!='\0'&&((index*2)+2)<=complete_node){
        return (index*2)+2;
        return -1;
    }
}

void preorder(int index){
    if(index>=0 &&tree[index]!='\0'){
        printf("%c",tree[index]);
        preorder(get_left_child(index));
        preorder(get_right_child(index));
}
}
void postorder(int index){
    if(index>=0 &&tree[index]!='\0'){
        postorder(get_left_child(index));
        postorder(get_right_child(index));
        printf("%c",tree[index]);
}
}
void inorder(int index){
    if(index>=0 &&tree[index]!='\0'){
        inorder(get_left_child(index));
        printf("%c",tree[index]);
        inorder(get_right_child(index));
        
}
}
int main(){
    printf("preorder");
    preorder(0);
    printf("\n");
    printf("postorder");
    postorder(0);
    printf("\n");
    printf("inorder");
    inorder(0);
    printf("\n");
    return 0;
}
