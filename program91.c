//Check if element is PRESENT in array or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt=0;
    
    bool bFlag = false;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iCnt = 0;
    int iValue = 0;
    int iLength = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that you want to search:\n");
    scanf("%d",&iValue);

    bRet = Search(ptr, iLength, iValue);

    if(bRet==true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present");
    }

    free(ptr);

    return 0;

}