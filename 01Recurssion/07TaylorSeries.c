#include <stdio.h>

double taylorSeriesRecursion(int m, int n) // un optimized version
    {
        static double nrator=1, factorial=1;
        double result ;
        if(n==0)
            return 1;
        result = taylorSeriesRecursion(m,n-1);
        nrator = nrator * m;
        factorial = factorial * n;
        return result+nrator/factorial ;
    }

double taylorSeriesLoop(int m, int n)
    {
        double s = 1 , num = 1, den = 1;

        for(int i = 1 ; i <= n ; i++)
            {
                num *= m;
                den *= i;
                s += num/den;
            }
            return s;

    }

int main(void)
    {
        printf("%lf\n", taylorSeriesRecursion(1,15));
        printf("%lf\n", taylorSeriesLoop(3,20));
        return 0;
    }