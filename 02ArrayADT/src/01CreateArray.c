#include "../include/CommonLib64.h"
#include "../include/ArrayDT.h"

//Creates an Array in the Heap.
int* CreateHeapIntArray(int* SizeOfArray)
    {   
        if (*SizeOfArray<=1)
            *SizeOfArray = 4;
        int* NewHeapArray = (int*) calloc(*SizeOfArray, sizeof(int));
        return NewHeapArray;
    }

//SetLength
//SetSize
//CreatesArray
void DefineArray(struct CreateArray* CustomArray)
    {
        printf("Enter the size of the array[defaults to 4]: ");
        scanf("%d" , &CustomArray->ArraySize);
        printf("Set the length of the array: ");
        scanf("%d" , &CustomArray->ArrayLength);
        if (CustomArray->ArraySize > 0)
        {
        CustomArray->ArrayAddress = CreateHeapIntArray(&CustomArray->ArraySize);
        printf("Array Created\n");
        }
    }

//DisplayArrayContents()
void PrintContentsOfArray(struct CreateArray* CustomArray)
    {
        printf("-------------------- ------------------------- -------------------- \n");
        for (int i = 0; i < CustomArray->ArrayLength ; i++)
        {
            printf("[%d]: %p \t %d \n" , i , &CustomArray->ArrayAddress[i] , CustomArray->ArrayAddress[i] ) ; 
        }
    }