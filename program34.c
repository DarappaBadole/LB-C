//Acceppt Number from user check thAT NUMBER IS perfect or not


#include<stdio.h>
#include<stdbool.h>


int  AdditionOfFactors(int iNo)
{
   int iCnt = 0;
   int iSum = 0;

   for(iCnt=1 ; iCnt<=(iNo/2) ; iCnt++)
   {
      if((iNo % iCnt)==0)
      {
        iSum = iSum + iCnt;


      }
   }

   return iSum;


}
//6    28   496     8128
bool CheckPerfect(int iData)
{
   int iAns=0;
   iAns=AdditionOfFactors(iData);

   if(iAns == iData)
   {
     return true;

   }

   else
   {
    return false;

   }


}


int main()
{

  int iValue=0;
  bool bRet=0;



  printf("Enter the value\n");
  scanf("%d",&iValue);

 bRet = CheckPerfect(iValue);

 if(bRet == true)
 {
    printf("%d is a perfect number:\n",iValue);

 }

 else
 {
    printf("%d is not a perfrct number\n",iValue);

 }




    return 0;

}