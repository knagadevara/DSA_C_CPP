#include <stdio.h>

/* 
Selecting the most number of possible combinations[sub sets] in a given object set.
Interchanging of position is a permutation but not an original Selection.
N =  Number of provided objects in set
r =  Number of possible combinations per object [r > 0 && r < N]
Method 1: Clubbed Factorial.
Method 2: Calculating nCr recursively by using Pascal's Triangle method. 
*/

int FactorialLoop(int n)
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
            fact *= i;
         return fact;
    }

int nCr(int N , int R)
    {
        int neu,dem;
        neu = FactorialLoop(N);
        dem = FactorialLoop(R);
        return neu/dem;
    }   

int nCrPascal(int N, int R)
    {
        if ( N==0 || N==R)
            return 1;
        return nCrPascal(N-1, R-1) + nCrPascal(N-1 , R);
    }

int main(void)
    {
        printf("%d\n" , FactorialLoop(5));
        return 0;
    }
// 