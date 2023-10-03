#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >=0) && (fMarks < 35.00))
    {
        printf("Your Are Fail...\n");
    }
    else if ((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("You are pass Class... ");
    }
    else if ((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second Class...");
    }
    else if ((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First class...");
    }
    else if ((fMarks >= 75.00) && (fMarks < 100.00))
    {
        printf("Your are passed with Distinction...");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter your Percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    //printf("")
    return 0;
}