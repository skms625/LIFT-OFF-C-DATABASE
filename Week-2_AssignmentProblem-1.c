#include <stdio.h>
// Write a C program to calculate the sum of digits of a number.
int main() {
    
    int i, sum = 0, m ;
    printf("Enter a number :\n");
    scanf("%d", &i);
    printf(" %d \n", i);

    while( i>0 ){
        m = i % 10 ;
        sum = sum + m ;
        i = i / 10 ;
    }
    printf("The sum of the digits of the numbers is : %d \n", sum);

    return 0;
}
//Code written by Sai Kiranman Singh