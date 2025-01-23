#include<stdio.h>

int Addition(iValue1,iValue2)
{
    int Add = 0;

    Add = iValue1 + iValue2;

    return Add;
}

int main()
{
    int iNo1=0, iNo2=0, iAns=0;

    printf("Enter first number: \n");
    scanf("%d",&iNo1);

    printf("Enter second number: \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Additipn is : %d\n",iAns);

    return 0;
}