#include <stdio.h>
#include <stdlib.h>



/*int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1>=num3){

        result = num1;
   } else if(num2 >= num1 && num2>=num3){
        result = num2;
   } else{
    result = num3;
   }
    return result;
    }
*/



int main()
{
    char User1[20];
double a = 4.0;
double b = 3.0;
double c = 2.0;
double d = 1.0;
double f = 0.0;
double course1;
double course2;
double course3;
double course4;
double course5;

double gpa = (course1*course2*course3*course4*course5)/5;

printf("Write User's name: ");
scanf("%s", &User1);

printf("Write User's grade: ");
scanf("%lf", &course1);

printf("Write User's grade2: ");
scanf("%lf", &course2);

printf("Write User's grade3: ");
scanf("%lf", &course3);

printf("Write User's grade4: ");
scanf("%lf", &course4);

printf("Write User's grade5: ");
scanf("%lf", &course5);

printf("Result is : %lf", gpa);


    if (gpa >= 3.5){
        printf("dean's list");
    }else if (gpa<2.0){
    printf("Academic probation");
    }
    else
        printf("Good job");

/* printf("The max number is : %d", max(12,5,7));
 return 0;*/
}




