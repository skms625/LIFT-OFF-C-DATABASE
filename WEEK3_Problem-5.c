/*Write a program in C to check whether a given number is
 palindrome or not using recursion*/

#include <stdio.h>
#include <math.h>
  int reverse (int n)
  {
     int digit = (int)log10(n);

        if (n == 0)
           {
               return 0;
           }
     
   return (( n % 10 * pow(10, digit)) + reverse( n / 10 ));
  }

  int Pallindrome(int n)
  {
     if( n == reverse (n))
      {
        return 1;
      }   

  return 0;     
  }

  int main()
   {
      int n;
      printf("Enter any number: \n");
      scanf("%d", &n);
      printf("%d \n", n);

        if(Pallindrome(n) == 1)
          {  
             printf("%d is a pallindrome number. \n", n);
          }
    
        else
          {
             printf("%d is not a pallindrome number. \n", n);
          }
   return 0;
   }
//Code written by Sai Kiranman Singh
