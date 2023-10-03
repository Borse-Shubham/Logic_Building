#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function        :  CalculateCube
//  Description     :  It is used to Calculate Cube of a Number 
//  Input Arguments :  Integer
//  Output          :  Integer
//  Author          :  Shubham Shyam Borse
//  Date            :  02/10/2023
//
/////////////////////////////////////////////////////////////////////////

int CalculateCube(int iValue)
{
    auto int iCube = 0;
    iCube =  iValue*iValue*iValue;
    return iCube;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iNum = 0;
    auto int iAns = 0;

    printf("Enter the number which you want its Cube : \n");
    scanf("%d",&iNum);

    iAns = CalculateCube(iNum);
    printf("Cube  is : %d\n",iAns);

    return 0;
}