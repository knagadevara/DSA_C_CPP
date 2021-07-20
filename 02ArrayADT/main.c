#include "ArrayDT.h"
#include "01CreateArray.h"
#include "02ArrayOps.h"
#include "03LinearSearch.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
    {
        struct CreateArray myArray;
        DefineArray(&myArray);
        InsertItemSerially(&myArray);
        AppendItem(&myArray , 99);
        InsertItem(&myArray , 9 , 35);
        DeleteItem(&myArray , 9);
        SearchItemLinear(&myArray , 7);
        PrintContentsOfArray(&myArray);
        free(myArray.ArrayAddress);
        printf("Freeing memory after printing elements\n");
        return 0;
    }