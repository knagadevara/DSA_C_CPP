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
//SetSize, SetLength, CreatesArray
extern void DefineArray(struct CreateArray* CustomArray);

//DisplayArrayContents()
extern void PrintContentsOfArray(struct CreateArray* CustomArray);
//Gets the item at Index
extern int GetItem(struct CreateArray* CustomArray , int index);


//InsertItemSerially()
extern void InsertItemSerially(struct CreateArray* CustomArray);
//Add to the end of the Array
extern void AppendItem(struct CreateArray* CustomArray , int item);
// Insert at any given Index but moves the rest of the items aside.
extern void InsertItem(struct CreateArray* CustomArray , int index , int item);
//Replaces Item at the given index
extern void SetItem(struct CreateArray* CustomArray , int index , int element);
// Delete an item at the index
extern int DeleteItem(struct CreateArray* CustomArray , int index);



// Shifting and Swapping items inside the Array
extern void SwapTrasnpose(struct CreateArray* CustomArray , int oldIndex , int newIndex);
extern void SwapToZero(int* oldIndexValue , int* zeroIndexValue);
extern void ReverseArray(struct CreateArray* CustomArray);
extern void LeftShiftItem(struct CreateArray* CustomArray);
extern void RightShiftItem(struct CreateArray* CustomArray);
extern void RotateItems(struct CreateArray* CustomArray);

// Search the array with improvement in time for next search by Transposition
extern int SearchItemLinear(struct CreateArray* CustomArray , int item);
extern int IterativeBinarySearchNumber(struct CreateArray* CustomArray , int indexContent);
extern int RecursiveBinarySearchNumber(struct CreateArray* CustomArray , int indexContent , int lowIndex , int highIndex);



#endif /* _ARRAY_DT_H_ */
