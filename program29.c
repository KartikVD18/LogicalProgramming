//Write a program of printing Jay Ganesh.. using User Centric Approach.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt  = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++ )
    {
        printf("Jay GAnesh...\n");
    }
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);            //Function call

    return 0;
}