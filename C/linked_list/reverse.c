#include <stdio.h>
#include <stdlib.h>

struct Node_
{
    int data;
    struct Node_* ptr;
}; typedef struct Node_ Node; 


void Insert(Node** head, int data);
void Print(Node** head);
void Reverse(Node** head);

void Insert(Node** head, int data){
    Node* tmp = (Node*) malloc(sizeof(Node));

    tmp->data = data;
    tmp->ptr = *head;
    *head = tmp;
}

void Print(Node** head){
    Node* tmp = *head;
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->ptr;
    }
    printf("\n");
}

void Reverse(Node**){
    
}

void main(){
     
    int data,n; 
    Node* head=NULL; 
    
    printf("몇 개의 데이터를 입력할건가요? : ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        printf("데이터를 입력하세요. : ");
        scanf("%d", &data);

        Insert(&head, data);
        Print(&head);

    }

}