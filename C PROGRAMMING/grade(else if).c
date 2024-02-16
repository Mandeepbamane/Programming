#include<stdio.h>
#include<conio.h>
int main()
{
    int per;
    printf("enter ur per");
    scanf("%d",&per);
    if(per>=90&&per<100)
    {
        printf("grade A++");
    }
    else if(per>=85&&per<90)
    {
        printf("grade A");
    }
    else if(per>=70&&per<85)
    {
        printf("grade B++");
    }
    else if(per>=65&&per<70)
    {
    printf("grade B");
    }
    else
    {
        printf("grade C");
    }
    return 0;
}
