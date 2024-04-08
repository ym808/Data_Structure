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

void Reverse(Node** head){
    Node* prev = NULL; 
    Node* curr = *head;
    Node* next = curr->ptr;

    while(1){
        curr->ptr = prev;
        if (next == NULL) break;
        prev = curr;
        curr = next;
        next = next->ptr;
    }
    *head = curr;
}

void main(){
     
    int data,n; 
    char answer[5];
    Node* head=NULL; 
    
    printf("How much data would you like to add? : ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        printf("Enter your data. : ");
        scanf("%d", &data);

        Insert(&head, data);
        Print(&head);

    }
    
    printf("Do you want to reverse your linked_list?(Y/N) : ");
    scanf?("%s", answer);
    if (answer == 'Y'){
        Reverse()
        printf("Your reversed list : ");
        Print(&head);
        
    }

}