//creating a linked list
#include<stdio.h>//printf,scanf
#include<stdlib.h>//malloc

struct node{
  int data;
  struct node *next;
};//data,next
struct node *head = NULL;//global pointer initalize with null

void create(int n){
  struct node *newnode,*temp;//pointers

  for(int i=0;i<n;i++){
    newnode = (struct node*)malloc(sizeof(struct node));//memoryallocation

    printf("enter data");
    scanf("%d",&newnode->data);//input data

    newnode->next=NULL;//newnode hold nothing
    if(head==NULL){
      head=temp=newnode;

    }else{
      temp->next=newnode;
      temp=newnode;
    }
  }
}
//display linked list
void display(){
  struct node *temp = head;

  if(head==NULL){
    printf("List is Empty\n");
    return;
  }

  printf("Linked List:");
  while(temp!=NULL){
    printf("%d ->",temp->data);
    temp=temp->next;
  }
  printf("NULL\n");
}
//count numbers of nodes
int countNodes(){
  struct node *temp =head;
  int count =0 ;

  while(temp !=NULL){
    count++;
    temp =temp->next;
  }
  return count;
}
//Search an Element
void search(int key){
  struct node *temp=head;
  int pos =1;

  while(temp !=NULL){
    if(temp->data==key){
      printf("Element found at position %d\n",pos);
      return;
    }
    temp=temp->next;
    pos++;
  }
  printf("element not found\n");
}
//length of list
int length(){
  struct node *temp =head;
  int len =0;

  while(temp!=NULL){
    len++;
    temp =temp->next;
  }
  return len;
}
int main(){
  int n,key;
  printf("Enter numberd of nodes:");
  scanf("%d",&n);
  create(n);
  display();
  printf("numbers of nodes:%d\n",countNodes());
  printf("Enter element to search:");
  scanf("%d",&key);
  search(key);
  printf("length of list :%d\n",length());
  return 0;

}
