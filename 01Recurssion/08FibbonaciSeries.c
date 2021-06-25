#include <stdio.h>
#include <stdlib.h>

int fibLoop(int n)
    {
        int term0=0, term1=1, sum=0, i;

        if(n<=0) return n;
        for (i = 1; i < n ; i++)
        {
            sum = term0 + term1 ;
            term0 = term1 ;
            term1 = sum;
        }
        return sum;
    }

int* createArray(int* n)
    {
        int* heapArray = (int*) calloc(*n , sizeof(int));
        for (int i = 0; i < *n; i++)
            heapArray[i]=-1;        
        return heapArray;
    }

int FArray[10];
    // int* FArray;
    // if (n>0) 
    //     FArray = createArray(&n);
    // else
    //     return 1;

int memoizationFibSeries(int n)
    {

     if (n <=1 )
     {
        FArray[n] = n;
        return n;
     }
     else
     {
         if(FArray[n-2] == -1)
                FArray[n-2] = memoizationFibSeries(n-2);
         if(FArray[n-1] == -1)
                FArray[n-1] = memoizationFibSeries(n-1);
        return FArray[n-2] + FArray[n-1];
     }
    }

int main(void)
    {
        printf("%d\n" , fibLoop(10));
        for (int i = 0; i < 10; i++)
        {
            FArray[i] = -1;
        }
        
        printf("%d\n" , memoizationFibSeries(10));
        return 0;
    }