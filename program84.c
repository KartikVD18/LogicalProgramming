//Count Odd digits.

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;
    int iLength =0;

    printf("Enter the number of Elments :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountOdd(ptr, iLength);
    printf("Total number of odd elements are: %d\n",iRet);

    free(ptr);

    return 0;

}