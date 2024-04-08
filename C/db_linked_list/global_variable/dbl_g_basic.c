#include <stdio.h>
#include <stdlib.h>

void Insert(int data);
void Print();


typedef struct Node_{
    int data;
    struct Node_* prev;
    struct Node_* next;

} Node;

Node* head = NULL;

void Insert(int data){
    if (head == NULL){
        Node* tmp = (void*) malloc(sizeof(Node));
        tmp->data = data;
        tmp->prev = NULL;
        tmp->next = NULL;
        head = tmp;        

    }
    else{
        Node* tmp = (void*) malloc(sizeof(Node));
        tmp->prev = head->prev;
        tmp->next = head;
        head->prev = tmp;
        head = tmp;        
    }
}

void main(){

    int n,data;

    printf("How many data do you add?");   
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        printf("Enter your data.");
        scanf("%d", &data);
        Insert(data);
    }
}