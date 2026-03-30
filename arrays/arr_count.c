//count even and odd numbers in an array
#include<stdio.h>
int main(){
    int n ,i,arr[100];
    int even_count=0,odd_count=0;
    printf("enter the elements in an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]); 
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
           odd_count++;
        }

    }
    printf("\n Total even numbers:%d",even_count);
    printf("\nTotal odd numbers:%d\n",odd_count);
    
    return 0;
   
}