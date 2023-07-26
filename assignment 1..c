#include <stdio.h>
#include <stdlib.h>
//using standard library for time func
#include <time.h>



int main(){
    //declaring a variable
       int ran_dom;
       //thi srand is func used to place a neww value
       //according to it changing seed which here is time function which 
       //returns different value as the seconds passes
        srand(time(NULL));
        //used rand func where max is 9 and min is 0
       ran_dom=rand()%9;
       printf("The Randomly Generated Character is %d",ran_dom);
       
     
       return 0;
       
}