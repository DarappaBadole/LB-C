//calculate frequency of a number
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CheckLastOccurance(int Arr[],int iSize,int iNo)
{
   int iCnt = 0; int iPose = -1;
  

   for(iCnt = 0; iCnt < iSize;iCnt++)
     {
      
       if(Arr[iCnt]==iNo)
       {
           iPose = iCnt;

       }
     }
        return iPose;
     }
     

int main()
{

 int *ptr = NULL;
 int iLength = 0 , i = 0 , iRet = 0 , iValue = 0;

 //step 1 :accept size of array
 printf("Enter number of elements\n");
 scanf("%d",&iLength);

 //step 2 : allocate memory for array

 ptr = (int *)malloc(iLength*sizeof(int));

 //step 3 : Accept the elements for array

 printf("Enter the elements of array\n");
 for(i = 0 ;i<iLength ; i++)
 {
    scanf("%d",&ptr[i]);

 }

   printf("Enter the number to findout the last index of element\n");
    scanf("%d",&iValue);

 // step 4 : call the function

 iRet =CheckLastOccurance(ptr,iLength,iValue);

 if(iRet==-1)
 {
    printf("there is no %d in array\n",iValue);

 }

 else
 {
    printf("%d is occured in the array at last index %d\n",iValue,iRet);

 }
 //step 6: deallocate the memory

  // printf("NUmber of even elements are :%d",iRet);

 free(ptr);




    return 0;


}

