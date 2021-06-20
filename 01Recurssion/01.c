#include <stdio.h>

void ascendingFuncCal(int x) // Tail Recursion
    {
        if( x > 0)
        {
            printf("Actual Value: %d\tCalculated Value: %d\t", x , x*2);
            printf("Before Calling, acending\n");
            ascendingFuncCal(x - 1);
        }
    }

void descendingFuncCal(int x) // Head Recursion
    {
        if( x > 0)
        {
            descendingFuncCal(x - 1);
            printf("Actual Value: %d\tCalculated Value: %d\t", x , x*2);
            printf("After Calling, descending\n");
        }
    }

void FuncCal(int x)
    {
        if( x > 0)
        {
            printf("Actual Value: %d\tCalculated Value: %d\t", x , x*2);
            printf("Before Calling, acending\n");            
            FuncCal(x - 1);
            printf("Actual Value: %d\tCalculated Value: %d\t", x , x*2);
            printf("After Calling, descending\n");
        }
    }

int main(void)
    {
        int x = 3;
        printf("\nExecuting: ascendingFuncCal(x)\n");
        ascendingFuncCal(x);
        printf("\nExecuting: descendingFuncCal(x)\n");
        descendingFuncCal(x);
        printf("\nExecuting: FuncCal(x)\n");
        FuncCal(x);
        return 0;
    }