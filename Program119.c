#include<stdio.h>

int CountSpace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountSpace(Arr);

    printf("Number of Spaces is : %d\n",iRet);

    return 0;
}