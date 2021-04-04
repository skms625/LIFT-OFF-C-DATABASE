/*Write a program in C to find the square of any number using 
function.*/
#include <stdio.h>
#include <math.h>

int square (int i){
          return i*i;    }

int main() {

    int n;
    scanf("%d", &n);

    int answer = square(n);

    printf("The square of the number you have entered is %d .", answer );

    return 0;
}
//Code written by Sai Kiranman Singh