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
     int flag=0;
     printf("Original Array: ");
     int k=0;
     for(k=0;k<len;k++){
        printf("%d ",arr[k]);
     }
     printf("\n");
     for(j=0;j<len/2;j++){

     if(arr[j]!=arr[len-1-j]){
        flag=1;
        
        break;
     }
     }
     if(flag==1){
       printf("not a palindrome array\n");
     }
     else{
        printf("Palindrome array\n");
     }
     return 0;
}
