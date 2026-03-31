//linear search
#include<stdio.h>
int main(){
  int n,arr[n],key,found=0;
  printf("enter the no.of element");
  scanf("%d",&n);
  printf("enter the elements");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

  }
  printf("enter element to search :");
  scanf("%d",&key);

  for(int i=0;i<n;i++){
    if(arr[i]==key){
       printf("element found at position %d",i+1);
       found=1;
       break;

    }
   
  }
  if(found==0){
    printf("element not found");
  }
  return 0;

}