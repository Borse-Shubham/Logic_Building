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

long int CalculateCube(int iValue)
{
    long int iCube = 0;
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
    long int iAns = 0;

    printf("Enter the number which you want its Cube : \n");
    scanf("%d",&iNum);

    iAns = CalculateCube(iNum);
    printf("Cube  is : %ld\n",iAns);

    return 0;
}