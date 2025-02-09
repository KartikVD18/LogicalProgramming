#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iLength =0;
    int iCnt =0;

    //Step1 : Accept the number of elemets from user
    printf("Enter number of elemets ; \n");
    scanf("%d",&iLength);

    //Step2: Allocate that memory dynamically.
    ptr = (int*)malloc(iLength*sizeof(int));

    //Step3: Accpet the values and store into the dynamic memory
    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iLenth; <iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //Step4: Perform the operations(LOGIC)
    // Fucntion CAll

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