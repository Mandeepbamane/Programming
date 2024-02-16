#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("enter ur age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("u are eligibe to vote");
    }
    else
    {
        printf("u are ineligible to vote");
    }
    return 0;
}
