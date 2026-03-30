//maximum and minimum element 
#include<stdio.h>
int main(){
  int n,i,arr[100];
   printf("enter the elements in an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]); 
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
      if(arr[i]>max){
        max=arr[i];
      }
      if(arr[i]<min){
        min=arr[i];
      }

    }
    printf("Maximum =%d\n",max);
    printf("Minimum =%d\n",min);

}