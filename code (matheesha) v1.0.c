#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrs, mins, seconds,i=0;
    printf("Enter Hours: ");
    scanf("%d",&hrs);
    system("cls");
    printf("Enter Minute: ");
    scanf("%d",&mins);
    system("cls");
    printf("Enter Second: ");
    scanf("%d",&seconds);
    system("cls");

system("cls");
        printf("TIMER -> %d : %d : %d ",hrs,mins,--seconds);
        Sleep(1000);

for ( i = 100; ; i = i + 5)
           Beep(i,1000);
}