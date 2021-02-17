//Write a program to print given patterns using loops :
//    *       *
//      *   *
//        *
//      *   *
//    *       *
#include <stdio.h>
int main() {
  int n;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)  
    {   for( int j = 0; j <n; j++)
           {
	        if( i==j || i==n-j-1){
	            printf("* ");
	       } else {
	            printf("  ");
	              }
	       }
	    printf("\n");
	}
	 return 0;
}
// Code written by Sai Kiranman Singh