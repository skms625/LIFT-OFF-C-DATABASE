#include <stdio.h>
/* Write a C program to check whether an alphabet is vowel or consonant using
switch case.*/
// Code written by Sai Kiranman Singh
int main(){

   char c;
   printf("Enter an alphabet : \n");
   scanf( "%c" , &c );
   printf("You have entered : %c \n" , c );

    switch(c){
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
                printf(" The entered alphabet is a vowel. \n");

    default :
                printf("The entered alphabet is a consonant. \n");
            }

return 0;
}
