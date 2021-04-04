/* Write a C program to count the total number of words in a string. */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

  int main(void) 
  {	
    char str[] = "This is called coding";
    char * pch;
    int words = 0;
    pch=strchr(str,' ');
    
    while (pch!=NULL)
    {
      words ++;
      pch=strchr(pch+1,' ');
    }
	printf("%d",words);
  }
//Code written by Sai Kiranman Singh
