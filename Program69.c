#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(sizeof(int));
    printf("Memory Allocated Successfully...\n");

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element no %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Maximum(ptr, iCount);
    printf("\nMAximum Element is : %d\n",iRet);

    free(ptr);
    printf("Dynamic Memory Deallocated Successfully...");

    return 0;
}