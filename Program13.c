#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iValue)
{
    if((iValue%2) == 0)
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
    auto int iNo = 0;
    auto bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    bRet = CheckEven(iNo);

    if(bRet == true)
    {
        printf("%d is even number\n",iNo);
    }
    else
    {
        printf("%d is odd number\n",iNo);;
    }



    return 0;
}