//avg of array elements 
#include<stdio.h>
int main(){
    int n,arr[100],sum=0;
    float avg;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
     avg=(float)sum/2;
    printf("Average is %f\n",avg);
    return 0;
}
