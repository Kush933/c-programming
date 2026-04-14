#include<stdio.h>
int main(){
    int n,j,i;
    printf("Enter the size");
    scanf("%d",&n);
     int arr[n];
    printf("the input of array:");
    for(int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        //check if already counted
        if(arr[i]==-1)
        continue;

        for(int j=i+1 ;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;//mark as visited

            }

        }
        printf("%d occurs %d times \n",arr[i],count);
    }
    return 0;

}