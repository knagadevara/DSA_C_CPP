#include <stdio.h>

/*
    Optimising the power function,
    if power is even then make the power into half
        ex:
            According to the Power Rule of Exponents,
            a power m × n = (a * m) power n
            In case of EVEN n,  formula:  (m * m) power n 
                2 power 8 can be written as ( 2 power 2 ) × 4 = (2 power 2) power 4
                Can further imply to,
                (2 * 2) power 4
            In case of ODD n, formula:  m * (m * m) power n
                2 power 9 can be written as 2 * (2 power 2 × 4) =  2 * (2 power 2) power 4
                Can further imply to,
                2* ( (2 * 2) power 4 )             
            We can see that the power value is decreased to half, which means less number of stack-frames and variables created through recursion.
*/

int exponent_power(int m , int n)
    {
        if(n==0)
            return 1;
        if (n%2==0){
            printf("Even Block m: %d, n: %d\t calling: exponent_power( %d * %d , %d/2)\n",m,n , m,m,n);
            return exponent_power( m * m , n/2);}
        else{
            printf("Odd Block m: %d, n: %d\t calling: ( %d * exponent_power(%d * %d, (%d-1)/2))\n",m,n, m,m,m,n);
            return ( m * exponent_power(m * m, (n-1)/2));}           
    }

int main(void)
    {
        printf("%d\n" , exponent_power(2,9));
        return 0;
    }