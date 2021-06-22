#include <stdio.h>

void functionB(int a); // Prototyping the function

// indirect recursion, passing in other function which inturn again passes the calling function.
void functionA(int a)
    {
        if(a>0)
        {
        printf("%d\n",a);
        functionB(a-1);
        }
    }

void functionB(int a)
    {
        if(a>0)
        {
        printf("%d\n",a);
        functionA(a/2);
        }
    }

// Nested recursion, passing in other function which inturn again passes the calling function.
int functionC(int a)
    {
        if(a>100)
            return a-10;
        return functionC(functionC(a+11));
    }

int main()
    {
        functionA(30);
        functionC(100);
        return 0;
    }