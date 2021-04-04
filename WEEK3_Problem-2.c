/*Write a C program to print the factorial of a given number using 
function.*/
#include <stdio.h>
#include <math.h>

int factorial (int i){
    int answer = 1;
    while( i > 0 ){
        answer = answer * i;
        i = i - 1;  
    }
        return answer; }

int main() {

    int n;
    scanf("%d", &n);

  int answer = factorial(n);
  printf("The factorial of the number you have entered is %d .", answer );
  return 0;
}
//Code written by Sai Kiranman Singh