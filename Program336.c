// 4 th bit

#include<stdio.h>
#include<stdbool.h>

//  off 4th bit

typedef unsigned int UINT;

// 0000 0000 0000 0000 0000 0000 0000 0000

// 1111 1111 1111 1111 1111 1111 1111 0111

//   0    0    0    0   0    1    C   0

// oxFFFFFFF7
bool OffBit(UINT No)
{
    UINT iMask=OxFFFFFFF7;
    return (No&iMask);
    
   
}


int main()
{ 
    UINT Value=0;
    UINT  iRet=0;
    
    printf("Enter number :\n");
    scanf("%d",&Value);

    iRet=OffBit(Value);
    printf("updated number is : %d\n",iRet);
   



   

    return 0;
}
