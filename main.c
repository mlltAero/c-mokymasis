#include<stdio.h>
#include<conio.h>
int main()
{
    int ats;
    int numeris1;
    printf("Enter number1: ");
    scanf("%d", &numeris1);
    int numeris2;
    printf("Enter number2: ");
    scanf("%d", &numeris2);
    int numeris3;
    printf("Enter number3: ");
    scanf("%d", &numeris3);
    ats = numeris1+numeris2+numeris3;
    ats = ats / 3;
    printf("\nAverage: %d %s %p", ats, " >> " ,&ats);
    return 0;
    //h
}
