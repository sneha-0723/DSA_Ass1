#include <stdio.h>
int main(){
  int odd=0;
  int even=0;
  int pos=0;
  int neg=0;
  int zero=0;
  int i=0;
  int arr[20];
  for(i=0;i<20;i++){
    printf("Enter element: ");
    scanf("%d",&arr[i]);
  }
  int j=0;
  for(j=0;j<20;j++){
    if(arr[j]%2==0){
       even=even+1;
    }
    if(arr[j]%2==1){
       odd=odd+1;
    }
    if(arr[j]>0){
       pos=pos+1;
    }
    if(arr[j]<0){
       neg=neg+1;
    }
    if(arr[j]==0){
       zero=zero+1;
    }
  }
  printf("Positive: %d\n Negative: %d\n Even: %d\n Odd: %d\n Zeros: %d\n",pos,neg,even,odd,zero);
  return 0;
}

