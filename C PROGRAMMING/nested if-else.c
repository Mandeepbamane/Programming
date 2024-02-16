#include<stdio.h>
#include<conio.h>
int main()
{
    int email,pw;
    printf("enter ur email:");
    scanf("%d",&email);
    if(email==123)
    {
        printf("ur email is correct,enter pw");
        scanf("%d",&pw);
        if(pw==234)
        {
            printf("ur login is successful");
        }
        else
        {
            printf("ur pw is incorrect");
        }
    }
        else
        {
            printf("ur email is incorrect");
        }
    
    
    return 0;
}
