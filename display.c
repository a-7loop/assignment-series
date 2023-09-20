//write a c program to display the entered num using recursion

#include <stdio.h>

void displayNumber(int n);

int main() {
    int num;
    printf("enter the value=");
    scanf("%d",&num);
    
    printf("the entered number is=\n");
    
    displayNumber(num);
    return 0;
}

void displayNumber(int n) {
   if(n==0){
       return;
   }
   displayNumber(n/10);
   printf("%d\t",n%10);
   return;
}
