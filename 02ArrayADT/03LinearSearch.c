#include "03LinearSearch.h"
#include <stdio.h>
#include <stdlib.h>

// Gradually increases the performance
void SwapTrasnpose(struct CreateArray* CustomArray , int oldIndex , int newIndex)
    {
        if (newIndex >= 0)
        {
            int temp = CustomArray->ArrayAddress[oldIndex];
            CustomArray->ArrayAddress[oldIndex] = CustomArray->ArrayAddress[newIndex];
            CustomArray->ArrayAddress[newIndex] = temp;
        }

    }

//Directly Swaps with 0 index
void SwapToZero(int* oldIndexValue , int* zeroIndexValue)
    {
            int temp = *oldIndexValue;
            *oldIndexValue = *zeroIndexValue;
            *zeroIndexValue = temp;
    }

// Search the array with improvement in time for next search by Transposition
int SearchItemLinear(struct CreateArray* CustomArray , int item)
    {
        for(int i = 0 ; i < CustomArray->ArrayLength ; i++)
            if (CustomArray->ArrayAddress[i] == item)
            {   
                SwapTrasnpose(CustomArray , i , i - 1 );
                SwapToZero(&CustomArray->ArrayAddress[i - 1] , &CustomArray->ArrayAddress[0]);
                return i;
            }
        return -1;
    }