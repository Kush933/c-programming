//copy one array to another
 #include<stdio.h>
int main(){
   int n, arr1[50],arr2[100],i;
  printf("enter the no.of elements=\n");
  scanf("%d",&n);
  printf("enter the elements of array=\n");
  for(int i=0;i<n;i++){
   scanf("%d",&arr1[i]);
  }
  for(int i=0;i<n;i++){
    arr2[i]=arr1[i];
  }
  printf("copied array");
  for(int i=0;i<n;i++){
    printf("%d ",arr2[i]);
  }
  return 0;

}