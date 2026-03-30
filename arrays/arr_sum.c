//sum of all elements in an array
#include<stdio.h>
int main(){
    int n,arr[100],sum=0;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum is %d \n",sum);
    return 0;
}
