// Area of Circle

#include<stdio.h>

int main()
{
    float Radius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&Radius);

    fArea = 3.14f*Radius*Radius;

    printf("Area of Circle is : %f\n",fArea);

    return 0;
}