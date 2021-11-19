#include "../include/CommonLib64.h"
#include "../include/ArrayDT.h"

//InsertItemSerially()
void InsertItemSerially(struct CreateArray* CustomArray)
    {
        printf("\nEnter the number of elements to enter inside Array\n");
        if(CustomArray->ArrayLength <= CustomArray->ArraySize)
            { for (int i = 0; i < (CustomArray->ArrayLength) ; i++)
               scanf("%d" , CustomArray->ArrayAddress[i]);
            }
        else
            printf("Requested Length is greater than the size of the Array\n");
    }


void AppendItem(struct CreateArray* CustomArray , int item)
    {
        if(CustomArray->ArrayLength < CustomArray->ArraySize)
            {
                CustomArray->ArrayAddress[CustomArray->ArrayLength++] = item ; 
                printf("\nAppended Element inside the Array\n");
            }
        else
            printf("No Space Left \n");
    }


void InsertItem(struct CreateArray* CustomArray , int index , int item)
    {
        if(index >= 0 && index <= CustomArray->ArrayLength)
            {
                for (int i = CustomArray->ArrayLength ; i > index ; i-- )
                        CustomArray->ArrayAddress[CustomArray->ArrayLength] = CustomArray->ArrayAddress[CustomArray->ArrayLength - 1] ;
                CustomArray->ArrayAddress[index] = item;
                CustomArray->ArrayLength++;
            }
        else
            printf("Out Of Bound \n");
    }

// Delete an item at the index
int DeleteItem(struct CreateArray* CustomArray , int index)
    {

        if(index >= 0 && index <= CustomArray->ArrayLength)
            {
            // move the items after deletion.
            int item = CustomArray->ArrayAddress[index] ;
            for (size_t i = index ; i < CustomArray->ArrayLength -  1; i++)
                CustomArray->ArrayAddress[i] = CustomArray->ArrayAddress[i+1];
            CustomArray->ArrayLength--;
            return item;
            }
        return 0;
    }

// Get element at index
int GetElement(struct CreateArray* CustomArray , int index)
    {
        if(index >= 0 && index <= CustomArray->ArrayLength)
            return CustomArray->ArrayAddress[index];
        return -1;
    }


// Set element at index
int SetElement(struct CreateArray* CustomArray , int index , int element)
    {
        if(index >= 0 && index <= CustomArray->ArrayLength)
            CustomArray->ArrayAddress[index] = element;
    }
