#include "../include/CommonLib64.h"
#include "../include/ArrayDT.h"


// Command used to compile
// gcc main.c 01CreateArray.c 02ArrayOps.c 03LinearSearch.c -o main.out -Wall

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