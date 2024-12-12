#include<stdio.h>
#include<conio.h>
#include<string.h>
void Menu()
{
    printf("________________________ WELCOME TO AE FOOD AND RESTURANT __________________________\n");
    printf("\t\t\t        Below is the menu: \n\n");
    printf("       \t\t  MENU CODE\tMENU\t\t\tPRICE\n");
    printf("       \t\t  _______________________________________________\n");
    printf("       \t\t  AE01\t\tChicken Burger\t\t170.00\n");
    printf("       \t\t  AE02\t\tSpicy Pasta\t\t200.00\n");
    printf("       \t\t  AE03\t\tSpecial Sandwich\t300.00\n");
    printf("       \t\t  AE04\t\tItalian Pizza\t\t470.00\n");
    printf("       \t\t  AE05\t\tChilli Crab\t\t250.00\n");
    printf("       \t\t  AE06\t\tNachos\t\t\t190.00\n");
    printf("       \t\t  AE07\t\tChicken Lollipop\t180.00\n");
    printf("       \t\t  AE08\t\tBeef Shawarma\t\t170.00\n");
    printf("       \t\t  AE09\t\tChicken Wings\t\t160.00\n");
    printf("       \t\t  AE10\t\tSoft Drink\t\t30.00\n");
    printf("\n\n\n");
}
void Order_and_Make_Bill(int y)
{
    int i,quantity[10],day,month,year;
    float price,value,total_value,x=0,m=0;
    char code[10][10];
    float AE01=170.00,AE02=200.00,AE03=300.00,AE04=470.00,AE05=250.00,AE06=190.00,AE07=180.00,AE08=170.00,AE09=160.00,AE10=30.00;
    for(i=0;i<y;i++)
    {
        printf("ENTER MENU CODE: ");
        scanf("%s",&code[i]);
        printf("ENTER MENU QUANTITY: ");
        scanf("%d",&quantity[i]);
    }
    printf("ENTER DATE:\n");
    printf("DAY: ");
    scanf("%d",&day);
    printf("MONTH: ");
    scanf("%d",&month);
    printf("YEAR: ");
    scanf("%d",&year);
    printf("\n\n\n\n\n");
    printf("\t\t\t\t_______________________ AE FOOD AND RESTURANT ________________________\n");
    printf("\t\t\t\t--------------------------- Date:%d-%d-%d ---------------------------\n",day,month,year);
    printf("\t\t\t\t----------------------------------------------------------------------\n");
    printf("\t\t\t\t           CODE\t\tQUANTITY\tPRICE\t\tVALUE      \n");
    printf("\t\t\t\t----------------------------------------------------------------------\n");
    total_value=0;
    i=0;
    while(i<y)
    {
      if(strcmp(code[i],"AE01")==0)
    {
        price=AE01;
    }
    else if(strcmp(code[i],"AE02")==0)
    {
        price=AE02;
    }
    else if(strcmp(code[i],"AE03")==0)
    {
        price=AE03;
    }
    else if(strcmp(code[i],"AE04")==0)
    {
        price=AE04;
    }
    else if(strcmp(code[i],"AE05")==0)
    {
        price=AE05;
    }
    else if(strcmp(code[i],"AE06")==0)
    {
        price=AE06;
    }
    else if(strcmp(code[i],"AE07")==0)
    {
        price=AE07;
    }
    else if(strcmp(code[i],"AE08")==0)
    {
        price=AE08;
    }
    else if(strcmp(code[i],"AE09")==0)
    {
        price=AE09;
    }
    else if(strcmp(code[i],"AE10")==0)
    {
        price=AE10;
    }
    value=quantity[i]*price;
    printf("\t\t\t\t\t   %s\t\t%d\t\t%0.2f\t\t%0.2f\n",code[i],quantity[i],price,value);
    total_value=total_value+value;
    i++;
    }
    x=(total_value/100)*15;
    m=total_value+x;
    printf("\t\t\t\t----------------------------------------------------------------------\n");
    printf(" \t\t\t\t\t\t\t\t\t  Total Value = %0.2f/-\n",total_value);
    printf("\t\t\t\t\t\t\t\t\t  (+) 15%% vat = %0.2f/-\n",x);
    printf("\t\t\t\t----------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t        Total = %0.2f/-",m);

}
int main()
{
    int y;
    Menu();
    printf("_________________ ORDER MENU _________________\n\n");
    printf("HOW MANY TYPES OF MENU DO YOU WANT TO ORDER? :");
    scanf("%d",&y);
    Order_and_Make_Bill(y);
    printf("\n\n");
    printf("\t\t\t\t________________________ THANK YOU FOR COMING ________________________\n");
    printf("\t\t\t\t______________________ PLEASE VISIT US NEXT TIME _____________________\n");
    getch();
}


