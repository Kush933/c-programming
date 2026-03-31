//Binary Search
/*
 arr[mid]==key->found
 key<arr[mid]->search left(high=mid-1)
 key>arr[mid]->search right(low=mid+1)
 repeat until low>high
*/
#include<stdio.h>
int main(){
 int i,key,n;
  printf("enter the no. of elements");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements=\n");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("the key element is");
  scanf("%d",&key);

  int low=0, high=n-1,mid;
  while(low<=high){
    mid=(low+high)/2;

    if(arr[mid]==key){
      printf("element found at position %d",mid+1);
      return 0;
    }
    else if(key>arr[mid]){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  printf("element not found");
  return 0;
}

