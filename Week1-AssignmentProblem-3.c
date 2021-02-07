#include <stdio.h>
/* Write a C program to enter the radius of a circle and find its diameter,
   circumference and area. */

int main(){

    int r;
    printf( "Enter the radius of the circle : \n");
    scanf( "%d" , &r);
    printf("%d units \n ", r);

    float d , c , a ;
// d = diameter, c = circumference , a = area

    d = 2 * r ;
    c = 2 * (3.14) * r ;
    a = (3.14) * r * r ;

    printf("The Diameter of the circle is : %f units \n", d);
    printf("The Circumference of the circle is : %f units \n", c);
    printf("The Area of the circle is : %f square units \n", a);

//Code written by Sai Kiranman Singh
return 0;
}
