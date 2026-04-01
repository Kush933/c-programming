//largest element and it's position 
#include<stdio.h>
int main(){
  int n,i,arr[100];
  printf("enter the no.of elements: ");
  scanf("%d",&n);
  printf("enter the elements: \n");
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }
  int max=arr[0];
  int pos=0;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
      pos=i;
    }
  }
  printf("largest element=%d\n",max);
  printf("the position=%d",pos+1);

  return 0;
 
}