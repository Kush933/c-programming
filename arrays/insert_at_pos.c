//insertion a element at a specific position
#include<stdio.h>
int main(){
  int n,i,pos,element;
  printf("enter the no of  element");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements of array");
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }
  printf("Enter the element what u want to insert");
  scanf("%d",&element);
  printf("enter the position(base index1)");
  scanf("%d",&pos);
  //shift right
  for(int i=n-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
  }
  arr[pos-1]=element;
  n++;
  printf("updating array:\n");
  for(int i=0;i<n;i++){
    printf(" %d  ",arr[i]);
  }
  return 0;

}

