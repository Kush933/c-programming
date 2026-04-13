//bubble sort
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //bubble sort
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j+1]=arr[j];
            arr[j+1]=arr[j];
        }
    }
   }
   printf("sorted array :\n");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   return 0;

}