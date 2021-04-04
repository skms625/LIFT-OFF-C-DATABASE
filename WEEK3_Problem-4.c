/*Write a program in C to find the factorial of a number using 
recursion.*/
#include <stdio.h>

  int factorial( int m){
     if( m >= 1)
        return m * factorial(m - 1);
     else
        return 1;
} 

  int main(){
     int x;
     printf("Enter a number: \n");
     scanf("%d", &x);
     printf("%d \n", x);
     printf("The factorial of the number is %d.", factorial(x));

  return 0;
}
//Code written by Sai Kiranman Singh