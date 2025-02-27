///Reverse the string..

#include<stdio.h>

int iReverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10 ;
        iRev = iRev * 10 + iDigit;
        iNo  = iNo /10;
    }
    return iRev;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = iReverse(iValue);

    printf("Reverse number is : %d\n",iRet);

    return 0;
}