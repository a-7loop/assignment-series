#include <stdio.h>
#include <stdbool.h>


bool fibonacci(int num,int n){
    int i,num1,num2,sum, temp;
    num1=0;
    num2=1;
    
    for(i=1;i<=n;i++){
       
        sum=num1+num2;
        temp=num1;
        num1=num2;
        num2=sum;
        
        if(num==sum){
            return true;
        
    }
    }
    return false;
}

int main() {
    int check,num,range;
    printf("enter the value to be checked=");
    scanf("%d",&num);
    printf("enter the range=");
    scanf("%d",&range);
    check= fibonacci(num,range);
    
    if(check==true){
        printf("congrts!!,it is fibonacci number");
    }else {
        printf("oops,try again ");
    }
    
    return 0;
}