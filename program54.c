// Input : 78945
// Output :
// 5
// 4
// 9
// 8
// 7

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)                 //Updator
    {
        iNo = -iNo;
    }

    while(iNo>0)                            //Logic
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}