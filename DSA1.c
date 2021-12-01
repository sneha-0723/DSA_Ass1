#include <stdio.h>
#define len sizeof(arr)/sizeof(arr[0]);
int main(){
   int arr[10];
   int i=0;
   for(i=0;i<10;i++){
      printf("Enter element: ");
      scanf("%d",&arr[i]);
   }
   int Sum=0;
   int j=0;
   for(j=0;j<10;j++){
    Sum=Sum+(arr[j]*arr[j]);
   }
   printf("The sum of the squares is: %d\n",Sum);
   return 0;
}
