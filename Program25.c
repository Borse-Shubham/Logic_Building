#include<stdio.h>

int Average(int iNo1 , int iNo2, int iNo3)
{
    float iAvg = 0;
    iAvg = (iNo1 + iNo2 + iNo3;)/3;
    return iAvg;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float iRet = 0; 
    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number : \n");
    scanf("%d",&iValue3);

    iRet = Average(iValue1, iValue2, iValue3);

    printf("The average of Three numbers  is : %f\n",iRet);
}