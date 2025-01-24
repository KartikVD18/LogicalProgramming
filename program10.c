#include<stdio.h>

/*
    Step1 : Understand the problem statement
    Step2 : Write the algorithm
    Step3 : Decide the programming language
    Step4 : Write the Program 
    Step5 : Test the program
*/

/*
    Problem statement:
    Write a program which is used to perform Addition of two numbers.
*/

/*
    Step1 : Understand the problem statement
    User is going to enter the data in decimal format.
    If enterd data is negative we have to converrtt it to positive value
*/

/*
    Step2 : Write the algorithm

    START
        Accpet first input
        Accept second input
        If any of the input is negative then convert it into positive
        Perform the addition of the accepted values
        Display the addition
    STOP
*/

/*
    Step3 : Decide the programming language
    According to the problem statement we select C programming
*/

/*
    Step4: Write the program
*/

///////////////////////////////////////////////////
//
//Function Name : Addition
//Description : It is used to perform addition of 2 int values
//Input : int , int
//Output : int
//Author : Kartik Vitthal Dhole
//Date: 24/01/2024
//
///////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)
{
    int iAdd = 0;                               //Local Variables for result

    //Updator
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    if(iValue2 < 0)
    {
        iValue2 = -iValue2;
    }

    iAdd = iValue1 + iValue2;                   //Business Logic
    return iAdd;
}

////////////////////////////////////////////////////////////////////////////////
//
//  This application is used to perform addition of 2 numbers
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1=0, iNo2=0, iAns=0;                 //Local Variables for input

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);                 //Function call

    printf("Addition is : %d",iAns);

    return 0;
}