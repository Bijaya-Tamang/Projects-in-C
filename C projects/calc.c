#include <stdio.h>

int main()
{
    //Declaring the variables
    float num1, num2, ts;
    int ope;
    
    //Taking first number from user
    printf("Enter first number:");
    scanf("%f", &num1);
    
    //Taking second number from user
    printf("Enter second number:");
    scanf("%f", &num2);
    
    //Displaying the operations
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    
    //Asking user to selet operation
    printf("Select operation:");
    scanf("%d", &ope);
    
    //Perform the operations based on user input
    switch (ope) 
    {
        //Addition(+)
        case 1 : ts = num1 + num2;
                 printf("%f + %f = %f\n", num1, num2, ts);
                 break;
        //Subtraction(-)
        case 2 : ts = num1 - num2;
                 printf("%f - %f = %f\n", num1, num2, ts);
                 break;

        //Multiplication(*)         
        case 3 : ts = num1 * num2;
                 printf("%f * %f = %f\n", num1, num2, ts);
                 break;

        //Division(/)    
        case 4 :
        if (num2 == 0)
        {
            //If divisor is zero
            printf("The divisor cannot be zero!\n Try again!");
        }
        else
        {
            ts = num1 / num2;
            printf("%f / %f = %f\n", num1, num2, ts);
        }
        break;

        //Incae of invalid operation input
        default : printf("Invalid operation!\n Try again!\n");
                  break;
        
    }
    
    return 0;
}