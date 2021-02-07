#include <stdio.h>
/*Write a C program to enter temperature in Celsius and 
convert it into Fahrenheit.*/

int main() {
  
    int C;
    printf("Enter the temperature in Celsius : \n");
    scanf( " %d ", &C );
    printf("%d \n " , C );

    int F;
    // F = (9/5)C + 32
    F = (1.8) * C + 32 ;

    printf("The temperature in Fahrenheit is : %d  \n" , F );


//Code written by Sai Kiranman Singh
    return 0;
    
}
