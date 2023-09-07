/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//make a dyanmic array of any size and store the elemnets randomly in it and then
//you have to count even and odd elemnts.
#include <stdio.h>
#include <stdlib.h>		//dynamic functions containing library
#include <time.h>

int
main ()
{

  int n, i;

  //user input
  printf ("enter the number of elements= ");
  scanf ("%d", &n);


  //creating a dynamic array
  int *DynamicArray = (int *) malloc (n * sizeof (int));


  //condition to check if memory is sufficient 
  if (DynamicArray == NULL)
    {
      printf ("memory not sufficient");
      return 1;
    }

  srand (time (NULL));

  //initializing value
  for (i = 0; i < n; i++)
    {
      DynamicArray[i] = rand () % 100;	//storing random int value in array
    }

  //for even and odd
  int even = 0;
  int odd = 0;

  for (i = 0; i < n; i++)
    {

      if (DynamicArray[i] % 2 == 0)
	{
	  even++;
	}
      else
	odd++;
    }

  //printing the array
  for (i = 0; i < n; i++)
    {

      printf ("%d\t", DynamicArray[i]);

    }

  printf ("\n");

  printf ("the total even numbers is=%d\n", even);
  printf ("the total odd  numbers is=%d\n", odd);

  free (DynamicArray);
  return 0;





}
