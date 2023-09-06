/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#define size 7

int main(){
      int arr[size];
      int i;
      int max ,min;
      //enter the array values

      printf("enter the values for array\n");

      for(i<0;i<size;i++){
        printf("enter the arr[%d]\n",i);
        scanf("%d",&arr[i]);
      }

      //print in a horizontal form for comparison

      for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
      }
      
      //findig max and min
      max=arr[0];
      min=arr[0];

      for(i=0;i<size;i++){

        if(max<arr[i]){
            max=arr[i];
        }
        else if(min>arr[i]){
            min=arr[i];
            
        }
        printf("\n");
}
        //printing the value 
        printf("the minimum value for array is=%d\n",min);
        printf("the maximum value for array is=%d",max);

      
      return 0;
}  
