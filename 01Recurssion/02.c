#include <stdio.h>

// if a function is an operand and part of an expression it always gets evaluated in the  returning
int ascendingFuncCal(int x) //  Recursion with local variable
    {
        if( x > 0)
        {
        printf("Before call  x: %d\n" , x) ; // when ever the function is called new variables will be created and they are local to the function. 
        int fact =  ascendingFuncCal(x - 1 ) + x ; // gets evaluated while returning and all the activation records will be placed in stack in an order.
        printf("After call  x: %d\n" , x) ;        
        return fact ;
        }
        return 0 ; // returns in a case if x is less than 0.
    }


int it_x = 0; // global variable which gets created in code section, the value remains the same even after execution of the function.
int functionFact(int x)
    {
        if (x > 0) 
        {
            it_x ++;
            printf("Before call  x: %d\n" , x) ;
            printf("Before call  it_x: %d\n" , it_x) ;
            int fact = functionFact(x - 1) + it_x ;
            printf("After call  x: %d\n" , x) ;
            printf("After call  it_x: %d\n" , it_x) ;
            return fact;
        }
        return 0;
    }

int funcNest(int n) // nested recursion
    {
        if(n > 100)
            return n - 10;
        return funcNest(funcNest(n+11));
    }

int main(void)
    {   
        int x = 5 ;
        int y = ascendingFuncCal(x);
        printf("%d\n" , y) ;
        printf("\n\n\n") ;
        int z = functionFact(x);
        printf("%d\n" , z) ;        
        return 0;
    }