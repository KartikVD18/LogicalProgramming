#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCnt = 0;
    int iRet = 0;
    int iLength = 0;
    int *ptr = NULL;
    int iValue = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that you want to search :\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iLength, iValue);
    printf("Frequency is :%d\n",iRet);

    free(ptr);

    return 0;
}