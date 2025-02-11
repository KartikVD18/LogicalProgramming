//Calculate the Average of N numbers.

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum/iSize);
}

int main()
{
    int iCnt = 0;
    int iLength  = 0;
    int *ptr = NULL;
    float fRet = 0;

    //Step 1 : Accept the number of elements form user.
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    //Step 2 : Allocate that memory dynamically
    ptr = (int*)malloc(iLength*sizeof(int));

    //Step3: Accept the values and store into the dynamic memory.
    printf("Enter the elements :\n");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //Step4: Perform the operations (Logic)
    fRet= Average(ptr, iLength);
    printf("Addition is :%f\n",fRet);

    //Step5: Deallocate that memory
    free(ptr);

    return 0;
}

/*
    Step 1 : Accept the number of elements form user
    Step 2 : Allocate that memory dynamically
    Step 3 : Accept the values and store into the dynamic memory
    Step 4 : Perform the operations (Logic)
    Step 5 : Deallocate that memory 
*/