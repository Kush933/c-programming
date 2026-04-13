//smallest element and its postion
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the inputs of array \n :");
    for(int i=1;i<n;i++){
        scanf("%d",& arr[i]);

    }
    int min=arr[0];
    int pos = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
         min=arr[i];
         pos=i;

        }
    
    }
    printf("the smallest element %d :" ,min);
    printf("\n the position of array %d :",pos);
    return 0;
}