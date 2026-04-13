//largest element and its position
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no.elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("the input of array:\n");
    for(int i=1;i<n;i++){
     scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int pos=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i]; 
            pos=i; 
        }
     
    }

      printf("the largest element of an  array is :%d",max);
      printf("\n the position of the largest arr is :%d",pos);
    return 0;

}