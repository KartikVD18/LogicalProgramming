//Addition of EVEN & ODD digits of Array

#include<stdio.h>
#include<stdlib.h>

int AddEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Addition of Even elements :%d\n",iSumEven);
    printf("Addition of Odd elements :%d\n",iSumOdd);
}

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elements: \n");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    AddEvenOdd(ptr, iLength);
   
    free(ptr);

    return 0;
}