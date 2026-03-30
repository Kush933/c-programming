//read and display n numbers using an array 
#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("enter n ");
    scanf("%d",&n);
    printf("enter the array");
    for( int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("print the array");
    for( int i=0;i<n;i++)
    printf("%d  ",arr[i]);

    return 0;
}
