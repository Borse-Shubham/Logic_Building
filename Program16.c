#include<stdio.h>

float CalulatePercentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;

    if(iMarks > iTotal)
    {
        printf("Invalid Input\n");
        return fPercentage;
    }
    
    fPercentage = (((float)iMarks / (float)iTotal) * 100);
    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the Marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the total marks : \n");
    scanf("%d",&iValue2);

    fRet = CalulatePercentage(iValue1, iValue2);

    printf("Your Percentage is : %f\n", fRet);

    return 0;
}