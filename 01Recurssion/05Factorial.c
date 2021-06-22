#include <stdio.h>

unsigned int factorilaRecursion(unsigned int a)
    {   
        if(a > 0)
            return factorilaRecursion(a - 1) * a;
        return 1;
    }

int factorialIteration(int a)
    {
        int factorialNumber = 1;
        for (int i = 1; i <= a; i++)
        {
            factorialNumber = i * factorialNumber;
        }
        return factorialNumber ;
    }

int main()
    {
        printf("Factorial Recursion %d \n", factorilaRecursion(4));
        printf("Factorial Iteration %d \n", factorialIteration(5));
        return 0;
    }