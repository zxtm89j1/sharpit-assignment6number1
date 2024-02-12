#include <stdio.h>

void GetOperation(int *pointerToOperation);
int CheckEnd(int operation);
void GetNumbers(int *pointerToFirstNumber, int *pointerToSecondNumber);
float Calculate(int firstNumber, int secondNumber, int operation);

int main()
{

    int operation;
    int *pointerToOperation;
    pointerToOperation = &operation;

    int firstNumber;
    int secondNumber;

    int *pointerToFirstNumber;
    int *pointerToSecondNumber;

    pointerToFirstNumber = &firstNumber;
    pointerToSecondNumber = &secondNumber;

    do
    {
        GetOperation(pointerToOperation);

        if (CheckEnd(operation))
        {
            return 0;
        }

        GetNumbers(pointerToFirstNumber, pointerToSecondNumber);

        float result = Calculate(firstNumber, secondNumber, operation);

        printf("Result: %f \n", result);
    } while (operation);
}

void GetOperation(int *pointerToOperation)
{
    printf("Select an operation: \n \t [ 1 ] Compute Sum \n \t [ 2 ] Compute Product \n \t [ 3 ] Compute Quotient \n \t [ 4 ] End ");
    scanf(" %d", pointerToOperation);
}

void GetNumbers(int *pointerToFirstNumber, int *pointerToSecondNumber)
{
    printf("Enter first number: ");
    scanf(" %d", pointerToFirstNumber);

    printf("Enter second number: ");
    scanf(" %d", pointerToSecondNumber);
}

int CheckEnd(int operation)
{
    if (operation == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float Calculate(int firstNumber, int secondNumber, int operation)
{
    switch (operation)
    {
    case 1:
        return (float)firstNumber + secondNumber;
        break;
    case 2:
        return (float)firstNumber * secondNumber;
        break;
    case 3:
        return (float)firstNumber / secondNumber;
        break;
    }
}

