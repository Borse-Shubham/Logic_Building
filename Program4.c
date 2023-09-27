#include<stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iAns = iValue1 + iValue2;

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