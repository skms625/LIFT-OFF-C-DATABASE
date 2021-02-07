#include <stdio.h>
/* Write a C program to input marks of five subjects Physics, Chemistry, Biology,
   Mathematics and Computer. Calculate percentage and grade according to
   following:
     Percentage >= 90% : Grade A
     Percentage >= 80% : Grade B
     Percentage >= 70% : Grade C
     Percentage >= 60% : Grade D
     Percentage >= 40% : Grade E
     Percentage < 40% : Grade F */
// Code written by Sai Kiranman Singh
int main(){

    int phys, chem, bio, math, comp ;
    printf("Enter the marks obtained in the five subjects : \n ");
    scanf( "%d %d %d %d %d" , &phys ,&chem, &bio, &math, &comp);
    printf("The entered marks are : %d, %d, %d, %d, %d \n", phys, chem,
             bio, math, comp);
    
    int t;
    t = phys + chem + bio + math + comp;
    int percentage;
    /*percentage = ((obtained marks)/(total marks))% * 100 
                 = (t/500)*100 = t*(0.2) %   */
    percentage = t * (0.2);
    printf("Your percentage is : %d  \n", percentage);

    if( percentage >= 90){
        printf("You have secured Grade A \n" );
    }

    else if( percentage >= 80 ){
        printf("You have secured Grade B \n" );
}

    else if( percentage >= 70){
        printf("You have secured Grade C \n");
    }

    else if( percentage >=60){
        printf("You have secured Grade D \n");
    }

    else if( percentage >= 40){
        printf("You have secured Grade E \n");
    }

    else{
        printf("You have secured Grade F \n");
    }


return 0;
}
