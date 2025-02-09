#include<stdio.h>
#include<stdlib.h>

void_____(int Arr[], int iSize)
{
    //Logic
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number the elements  : \n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elemets : \n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    __________(ptr,iLength)
    free(ptr);

    return 0;
}