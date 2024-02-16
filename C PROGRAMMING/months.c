#include<stdio.h>
#include<conio.h>
int main() {
    int totalDays;
    
  
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    int years, months, weeks, days;

  
    years = totalDays / 365;

   
    int remainingDays = totalDays % 365;


    months = remainingDays / 30;


    remainingDays %= 30;

   
    weeks = remainingDays / 7;

 
    days = remainingDays % 7;

    
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}





