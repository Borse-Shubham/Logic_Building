#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{   
    printf("Factors of %d are : \n",iNo);
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf(" %d ",iCnt);

            iSum = iSum + iCnt;   
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter First number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("\nThe Sum of Factors is : %d",iRet);

    return 0;
}

//Time Complexity : 0(N/2)