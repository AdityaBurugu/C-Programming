#include <stdio.h>

void showChoices();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    float x, y;
    int choice;
    do
    {
        showChoices();
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("Sum = %0.2f\n", add(x, y));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("Difference = %0.2f\n", subtract(x, y));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("Product = %0.2f\n", multiply(x, y));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("Quotient =%0.2f\n", divide(x, y));
                break;
            case 5:
                break;
            default:
                printf("Invalid input\n");
        }
    }
    while (choice != 5);

    return 0;
}

void showChoices()
{
    printf("MENU\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");
    printf("5: Exit\n");
    printf("Enter your choice :");
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a *b;
}

float divide(float a, float b)
{
    return a / b;
}
