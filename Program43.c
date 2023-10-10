#include<stdio.h>
#include<stdbool.h>

bool FindPerfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;   
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter First number : \n");
    scanf("%d",&iValue);

    iRet = FindPerfect(iValue);

    if(iRet == true)
    {
        printf("%d is a Perfect Number...\n",iValue);
    }
    else
    {
        printf("%d is not a Perfect Number...\n",iValue);
    }
    return 0;
}

//Time Complexity : 0(N/2)