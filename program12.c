//Area of Circle

#include<stdio.h>

float CircleArea(float Radius)
{
    float Area = 0.0f;
    Area = 3.14f*Radius*Radius;
    return Area;
}

int main()
{
    float Value = 0.0f;
    float Result = 0.0f;

    printf("Enter the radius of circle: \n");
    scanf("%f",&Value);

    Result = CircleArea(Value);

    printf("Area of Circle is : %f\n",Result);

    return 0;
}