/*
    START
        Accept the percentage from user
        If percentage are less than 40 then display FAIL
        And if it is greater than or equal to 40 then display PASS
    STOP
*/

#include<stdio.h>

void DisplayResult(float Percentage)
{
    if(Percentage < 40)
    {
        printf("You are FAIL\n");
    }
    else
    {
        printf("You are PASS\n");
    }
}

int main()
{
    float Value = 0;

    printf("Enter the percentage : \n");
    scanf("%f",&Value);

    DisplayResult(Value);

    return 0;
}
