//reverse an array
#include<stdio.h>
int main(){
    int i,n,arr[100];
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    printf("\n original array");
      for(int i=0;i<n;i++){
      printf("%d", arr[i]);
    }
    printf("\n reversed array");
    for(int i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
    
}