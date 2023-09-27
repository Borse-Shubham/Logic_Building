#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Funtion Name    :  Addition
//  Description     :  It is used to perform additon of 2 integers
//  Input Arguments :  Integer, Intger
//  Output          :  Integer 
//  Author          :  Shubham Shyam Borse
//  Date            :  25/09/2023
//
//////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2 )
{
    int iSum = 0;           //Variable to store value of addition
    iSum = iNo1 + iNo2;
    return iSum;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of application which performs addition of 2 integers
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0;        //variable to store first input 
    auto int iValue2 = 0;        //Variable to store second input
    auto int iAns = 0;           //Variable to store the result 

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1 ,iValue2);      // Function Call to perform addition

    printf("Addition is : %d\n",iAns);

    return 0;
}

// Step 5 : Test the code
/*
Test case 1 :
    Input : 10 11
    Output : 21

Test case 2 :
    Input : 10 0
    Output : 10

Test case 3 :
    Input : 12 -6
    output : 6

Test case 4 :
    Input : -6 -5
    Output : -11
*/