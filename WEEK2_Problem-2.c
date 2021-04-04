/* Write a C program to print the sum of all the even elements and even position elements
in an array.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int n,digits=0,x,sum=0;
	scanf("%d",&n);
	x = n;
	while( n>0){
	   n = n/10;
	   digits++;
	}
	
	int arr[digits];
	
	for( int i =0; i < digits; i++){
	    arr[digits-i-1] = x%10;
	    x = x/10;
	}
	
	for( int j = 0; j < digits; j++){
	    if( arr[j]%2 == 0 || (j+1)%2==0){
	        sum =sum + arr[j];
	    }
	}
	
	printf("%d",sum);
    return 0;
}
//Code written by Sai Kiranman Singh
