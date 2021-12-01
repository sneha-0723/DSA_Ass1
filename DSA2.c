#include <stdio.h>
#define len sizeof(arr)/sizeof(arr[0])
int main(){
  int size;
  printf("Enter size of array: ");
  scanf("%d",&size);
  int i=0;
  int arr[size];
  for(i=0;i<size;i++){
     printf("Enter Array element: ");
     scanf("%d",&arr[i]);
  };
  int j=0;
  printf("Reverse array: ");
  for(j=len-1;j>=0;j--){
     printf("%d ",arr[j]);
  }
  printf("\n");
  return 0;
}
