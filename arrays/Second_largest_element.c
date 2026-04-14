#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest= arr[0];
    int second= -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i] !=largest){
            second=arr[i];

        }
    }
    printf("Second largest element is:%d",second);
    return 0;

}