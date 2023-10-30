#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter the Value : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the elemnts no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = OddAddition(ptr, iCount);

    printf("Addition of All Odd Elements is : %d \n",iRet);

    free(ptr);
    printf("Dynamic memory got deallocated Succesfully");

    return 0;
}