
#include "../include/CommonLib64.h"
#include "../include/ArrayDT.h"

int IterativeBinarySearchNumber(struct CreateArray* CustomArray , int indexContent)
    {
        int lowIndex  = 0 , highIndex = ( CustomArray->ArrayLength - 1 ) , midIndex ;

        while (lowIndex <= highIndex)
        {
            midIndex = (lowIndex + highIndex)/2 ;
            if(indexContent == CustomArray->ArrayAddress[midIndex])
                return midIndex;
            else if (indexContent < CustomArray->ArrayAddress[midIndex])
                highIndex = midIndex - 1;
            else
                lowIndex = midIndex + 1;
        }
        return -1;
    }

int RecursiveBinarySearchNumber(struct CreateArray* CustomArray , int indexContent , int lowIndex , int highIndex)
    {
        int midIndex;

        if (lowIndex <= highIndex)
        {
            midIndex = (lowIndex + highIndex)/2 ;
            if(indexContent == CustomArray->ArrayAddress[midIndex])
                return midIndex;
            else if (indexContent < CustomArray->ArrayAddress[midIndex])
                return RecursiveBinarySearchNumber(CustomArray , indexContent , lowIndex , (midIndex - 1));
            else
                return RecursiveBinarySearchNumber(CustomArray , indexContent , (midIndex + 1) , highIndex);
        }
        return -1;
    }