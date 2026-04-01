//insertion a element at a specific position
#include<stdio.h>
int main(){
  int n,i,pos;
  printf("enter the no of  element");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements of array");
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }
  printf("enter the position to delete(1-based index):");
  scanf("%d",&pos);
  //shift left
  for(int i=pos-1;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  n--;//decrease size
  printf("updating array after deletion :\n");
  for(int i=0;i<n;i++){
    printf(" %d  ",arr[i]);
  }
  return 0;

}

