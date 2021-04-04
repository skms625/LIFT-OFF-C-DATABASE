/*Write a program in C to find GCD and LCM of two given number using 
recursion.*/
#include <stdio.h>
#include <math.h>

int analysis (int m, int n ){
   int div, dev, rem, gcd, lcm;
/*div = divisor  , dev = dividend , rem = remainder,
 gcd = greatest common divisor , lcm = least common multiple */

    if( m > n){
        div = m / n;
        rem = m % n;
    } else {
        div = n / m;
        rem = n % m;
    }

        rem = dev / div ;
    while( rem != 0 ){
        dev = div;
        div = rem;
        rem = dev/div;
    }
    
    gcd = div;
    lcm = m * n / gcd;
    
    printf("The GCD is : %d \n",gcd);
    printf("The LCM is : %d",lcm);
}

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    analysis (x,y);
  return 0;
}
//Code written by Sai Kiranman Singh