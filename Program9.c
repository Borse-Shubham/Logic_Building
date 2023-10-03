#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function        :  CalcArea
//  Description     :  It is used to Calculate area of circle 
//  Input Arguments :  double
//  Output          :  double 
//  Author          :  Shubham Shyam Borse
//  Date            :  02/10/2023
//
/////////////////////////////////////////////////////////////////////////


double CalcArea(int dNO)
{
    auto double fArea = 0;
    auto const double PI = 3.14;
    fArea =  PI*dNO*dNO;
    return fArea;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    double fRadius = 0;
    double fAns = 0;

    printf("Enter the radius of circle : \n");
    scanf("%lf",&fRadius);

    fAns = CalcArea(fRadius);
    printf("The Area of Circle is : %f\n",fAns);

    return 0;
}