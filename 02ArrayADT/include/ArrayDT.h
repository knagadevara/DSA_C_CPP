#ifndef _ARRAY_DT_H_
#define _ARRAY_DT_H_
//Data Type definations should only go inside "main" but not into any other *.c or *.h file
struct CreateArray
    {
    int* ArrayAddress;
    int ArraySize;
    int ArrayLength; 
    };

// #include "ArrayDT.h"
//Creates an Array in the Heap.
extern int* CreateHeapIntArray(int* SizeOfArray);


//SetLength
//SetSize
//CreatesArray
extern void DefineArray(struct CreateArray* CustomArray);


//DisplayArrayContents()
extern void PrintContentsOfArray(struct CreateArray* CustomArray);

//InsertItemSerially()
extern void InsertItemSerially(struct CreateArray* CustomArray);


//Add to the end of the Array
extern void AppendItem(struct CreateArray* CustomArray , int item);


// Insert at any given Index
extern void InsertItem(struct CreateArray* CustomArray , int index , int item);


// Delete an item at the index
extern int DeleteItem(struct CreateArray* CustomArray , int index);

// Search the array with improvement in time for next search by Transposition
extern void SwapTrasnpose(struct CreateArray* CustomArray , int oldIndex , int newIndex);
extern void SwapToZero(int* oldIndexValue , int* zeroIndexValue);
extern int SearchItemLinear(struct CreateArray* CustomArray , int item);
extern int IterativeBinarySearchNumber(struct CreateArray* CustomArray , int indexContent);
extern int RecursiveBinarySearchNumber(struct CreateArray* CustomArray , int indexContent , int lowIndex , int highIndex);


extern int GetItem(struct CreateArray* CustomArray , int index);
extern void SetItem(struct CreateArray* CustomArray , int index , int element);


#endif /* _ARRAY_DT_H_ */
