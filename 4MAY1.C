#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int month;
    printf("\npress 1 to January");
    printf("\npress 2 to February");
    printf("\npress 3 to March");
    printf("\npress 4 to April");
    printf("\npress 5 to May");
    printf("\npress 6 to June");
    printf("\npress 7 to July");
    printf("\npress 8 to August");
    printf("\npress 9 to September");
    printf("\npress 10 to October");
    printf("\npress 11 to November");
    printf("\npress 12 to December");
    printf("\nenter your choice");
    scanf("%d",&month);
    switch(month)
    {
    case 1 :
	    printf("January");
	    break;
    case 2 :
	    printf("February");
	    break;
    case 3 :
	    printf("March");
	    break;
    case 4 :
	    printf("April");
	    break;
    case 5 :
	    printf("May");
	    break;
    case 6 :
	    printf("June");
	    break;
    case 7 :
	    printf("July");
	    break;
    case 8 :
	    printf("August");
	    break;
    case 9 :
	    printf("September");
	    break;
    case 10 :
	    printf("October");
	    break;
    case 11 :
	    printf("november");
	    break;
    case 12 :
	    printf("december");
	    break;
    default :
	     printf("plz enter valid choice!");
    }
getch();
}







