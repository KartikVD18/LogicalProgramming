/*
    START
        Accept the total marks
        Accept the obtained marks
        Calculate the percentage as (obtained/total)*100
        Display the calculated percentage
    STOP
*/

#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float Percentage = 0.0;
    
    Percentage = (iObtained / iTotal)*100;              //Business Logic

    return Percentage;
}

int main()
{
    int iValue1=0, iValue2=0;
    float Result=0.0;

    printf("Please enter obtained marks in your exam : \n");
    scanf("%d",&iValue1);

    printf("Please enter the total marks : \n");
    scanf("%d",&iValue2);

    Result = CalculatePercentage(iValue1,iValue2);          //Function Call

    printf("Your percentage is : %f\n",Result);

    return 0;
}