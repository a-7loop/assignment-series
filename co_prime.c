#include <stdio.h>
#include <stdbool.h>


//function to check coprime
bool check_Coprime(int num1,int num2)
{   
    int i;
    for(i=2;i<=num1&&i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            return false;
        
        }
    }
    
    return true;
}

int main()
{
    int check,n,a;
    
    //taking input from the user
    printf("enter the first no=\t");
    scanf("%d",&n);
     printf("enter the second no=\t");
    scanf("%d",&a);
    printf("\n");
    
    //final result 
    check=check_Coprime(n,a);
    
    if(check==true){
        printf("oops,not a co-prime");
    }else 
    printf("congrts!!,a co-prime");

    return 0;
}
