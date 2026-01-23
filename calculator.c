#include <stdio.h>
#include <string.h>

int main() {

    
char operator;
double num1, num2, result;
char choice[4];   // Yes / No options

do {
printf("\nWhich calculation do you want to perform? (+ - * /): ");
scanf(" %c", &operator);

printf("\nEnter the first number: ");
scanf("%lf", &num1);

printf("\nEnter the second number: ");
scanf("%lf", &num2);

switch (operator) {
case '+':
result = num1 + num2;
printf("\nResult = %.2lf", result);
break;

case '-':
result = num1 - num2;
printf("\nResult = %.2lf", result);
break;

case '*':
result = num1 * num2;
printf("\nResult = %.2lf", result);
break;

case '/':
while (num2 == 0) {
printf("\nDivision by zero is not possible. Incorrect!\n");
printf("Please enter a new second number: ");
scanf("%lf", &num2);
}

result = num1 / num2;
printf("\nResult = %.2lf", result);
break;

default:
printf("\n%c is not a valid transaction.", operator);
break;
}

    printf("\n\nWould you like to take any other action? (Yes/No): ");
    scanf("%s", choice);

    } while (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0);

    printf("\nThis is the end.Thanks for the calculations.");
    printf("\nPress Enter to exit..."); 
    getchar();
    getchar();
    

    return 0;
}
