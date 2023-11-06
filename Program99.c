#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    printf("ASCII value of Character in Decimal is : %d\n",ch);
    printf("ASCII value of Character in Ocatal is : %o\n",ch);
    printf("ASCII value of Character in Hexadecimal is : %x\n",ch);

    return 0;
}