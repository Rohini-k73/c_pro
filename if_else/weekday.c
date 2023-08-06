//Program to print day name of week

#include<stdio.h>
void main(){
	int week;
	printf("Enter a week number(1-7)");
	scanf("%d", &week);
	
	if(week==1){
		printf("Sunday");
	}
	else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7");
    }

}
