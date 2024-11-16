/*Balaji wants your help to design a fitness calculator. The simple measure of body fitness is the BMI or Body Mass Index. It depends only on the height L and weight W of a person. It is defined as BMI = [weight / height2] where weight is taken in kilograms and length in meters. 



Four general grades are proposed:

Underweight[U] - when BMI < 18.5
Normal weight[N] - 18.5 <= BMI < 25.0
Heavyweight [H] - 25.0 <= BMI < 30.0
Overweight [O] - above or equal to 30.0


Write a program that takes in the Weight (in Kg) and Length (in meters) of an individual and displays the grade as U, N, H, O.



Note: Store all the variables in register memory.

Input format :
The first line of input consists of an integer, representing the weight.

The second line consists of a double value, representing the height in meters.

Output format :
The output displays the grade based on the given conditions.*/

#include<stdio.h>
int main()
{
    register int n;
    register double m;
    scanf("%d %lf",&n,&m);
    register double b=n/(m*m);
    if( b < 18.5)
        printf("U");
    else if (18.5 <= b && b< 25.0 ) 
        printf("N");
    else if(25.0 <= b && b< 30.0)
        printf("H");
    else
        printf("O");
}
