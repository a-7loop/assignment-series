#include<stdio.h>


int main(){
    
    
    int n,i;
    
    //user entry for elemnts 
    printf("enter the elemnts=");
    scanf("%d",&n);
    int arr[n];
    
    //initialize
    for(i=0;i<n;i++){
        
        printf("enter the arr[%d]=\t\n",i);
        scanf("%d",&arr[i]);
    }
    
    //main code to shift zeroes
    int index=0;
    for(i=0;i<n;i++){
          if(arr[i]!=0){
              arr[index]=arr[i];
              index++;
          }
    }
    
    
    for(i=index;i<n;i++){
        
        arr[i]=0;
        
    }
    
    
    //printing the results
    printf("the shifted value is=\n");
    for(i=0;i<n;i++){
        
        printf("%d\t",arr[i]);
        
    }
    
    return 0;
    
    }
        
    
    

