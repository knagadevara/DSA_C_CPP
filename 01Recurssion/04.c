#include <stdio.h>

// The most ideal way is to directly apply the formula
int functionA(int a)
    {
        if(a == 0)
            return 0;
        return a*(a+1)/2 ;        
    }

// Doing it with a loop, which dosent create new functions in stack but will run a statement for n times. 
int functionB(int a)
    {
        int s = 0; // to add the value of 'i' till it reaches 'n'
        for (int i = 0; i <=a; ++i) // to iterate till the passed range 'a'
            s += i ;
        return s;
    }

// Sum of 'n' natural numbers using recurssion, which has comparitively large time complexity. It creates multiple functions in stack utilizing a lot of seperate isolated frames.
// works in the ascending order bt adds the value of 'a' while returning.
int functionC(int a)
    {
        if(a == 0)
            return 0;
        return functionC(a-1) + a ;        
    }

int main(void)
    {
        printf("Direct Formula Application Method: %d\n" , functionA(20));
        printf("Process in a loop Method: %d\n" , functionB(20));
        printf("Recursson Method: %d\n" , functionC(20));
        return 0;
    }