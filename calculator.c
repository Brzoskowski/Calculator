#include <stdio.h>
#include <math.h>

int main(){
    int operation;
    double num1;
    double num2;
    double result;

    printf("\nWelcome to Samka's Calculator!\n");

    puts("******************************************");
    puts("Bellow are your options: ");
    puts("1 - Addition");
    puts("2 - Subtraction");
    puts("3 - Multiplication");
    puts("4 - Division");
    puts("5 - Modulus");
    puts("6 - Power");
    puts("0 - More Operations");
    printf("\nWhat type of operation would you like to do? ");
    scanf("%1d", &operation);

    if (operation != 0)
    {
    printf("Insert value of X: ");
        scanf("%lf", &num1);
    printf("Insert value of Y: ");
        scanf("%lf", &num2);
    }
    switch (operation)
    {
    case 1:
        result = num1 + num2;
        printf("The result of the operation %.2f + %.2f = %.2f", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("The result of the operation %.2f - %.2f = %.2f", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("The result of the operation %.2f * %.2f = %.2f", num1, num2, result);
        break;
    case 4:
        result = num1 / num2;
        printf("The result of the operation %.2f / %.2f = %.2f", num1, num2, result);
        break;
    case 5:
        result = (int) num1 % (int) num2;
        printf("The modulus of the operation %.2f / %.2f = %.2f", num1, num2, result);
        break;
    case 6:
        result = pow(num1, num2);
        printf("%.2f to the power of %.2f = %.2f", num1, num2, result);
        break;
    }
if (operation == 0)
{
    puts("1 - Area");
    puts("2 - Circunference");
    puts("3 - Hypotenuse");
    puts("4 - Baskhara");
    puts("5 - Sin");
    puts("6 - Cos");
    puts("7 - Tan");
    puts("8 - Logaritm");
    puts("0 - Extras (Beta)");
    printf("\nWhat type of operation would you like to do? ");
    scanf("%1d", &operation);
}
if (operation == 0)
{
    puts("1 - Temperature Conversor");
    puts("2 - Measurement Conversor");
    puts("3 - Currency Conversor");
}
    return 0;
}
